
# -----------------------------------
# Leitura, Silvio.



library(stringr)
require(rvest) # importa a biblioteca rvest

cidades <- read_html("http://cidades.ibge.gov.br/download/mapa_e_municipios.php?lang=&uf=rn") %>% html_table(fill=TRUE)

base<-data.frame(cidades[[1]][c(1,2,4)]) # Selecionando os dados de interesse de interesse
names(base)<-c("cidade","cep","pop2010") # Nomeando as colunas
row.names(base)<-1:168
# Enumerando as linhas
base$pop2010<-str_replace_all(base$pop2010,"\\.","") # Retira os pontos
base$pop2010<-as.numeric(base$pop2010) # Converte os caracteres em numéricos
base[is.na(base)] <- 0 # Substitui valores Nas por zeros
head(base) # lista as primeiras linhas do dataframe base




library(sp)

setwd("~/Documentos/Maps/") # Define o diretório de trabalho
br <- readRDS("BRA_adm2.rds") # Importa os polígonos do arquivo no diretório de trabalho <http://gadm.org>
plot(br)

head(br) # as primeiras linhas mostram q existe um campo chamado $NAME_1 com os nomes dos estados

rn = (br[br$NAME_1=="Rio Grande do Norte",]) # Filtrando apenas os municípios do RN
plot(rn)
plot(rn[rn$NAME_2=="Natal",], add=T, col="red")

rn <- merge(x=rn, y=base, by.x="NAME_2", by.y="cidade") # Faz um merge dos dataframes

# Criando os intervalos e classificando
col_no = as.factor(as.numeric(cut(rn$pop2010.x, breaks =
                                    c(0,3000,10000,100000,300000,500000,80000,1000000), labels=c("<3k", "3k-10k", "10k-
100k","100k-300k", "300k-500k", "500k-800k", ">800k"), right= FALSE)))
# Nomeando os intervalos – irá aparecer na legenda do grafico
levels(col_no) = c("<3k", "3k-10k", "10k-100k","100k-300k", "300k-500k", "500k-800k",">800k")
# Adicionando a informação da categoria no dataframe
rn$col_no = col_no


library(RColorBrewer)
myPalette = brewer.pal(7,"Reds")

spplot(rn, "col_no", col=grey(.9), col.regions=myPalette, main="Municípios do RN")




library(ggmap) # importa a biblioteca ggmap para obter a geolocalização
# Define o nome das cidade-alvos – a ser apresentada como label no mapa
nomes = c("Natal","Mossoró","Pau dos Ferros")
# Define or argumentos de busca para as cidade-alvos – a ser usada pelo ggmap
nam = c("Natal+Brazil+RN","Mossoro+Brazil+RN","Pau dos Ferros+Brazil+RN")
# Busca a geolocalização (Google) para cada cidade
pos = geocode(nam)
# Define a posição dos labels como sendo um pouco acima dos pontos
tlat = pos$lat+0.05
# -- the city name will be above the marker
# Cria um daframe com as informações (nome da cidade, longitude, latitude e posição dolabel)
cities = data.frame(nomes, pos$lon,pos$lat,tlat)
# Nomeia as colunas de longitude e latitude
names(cities)[2] = "lon"
names(cities)[3] = "lat"

# Criando os labels
text1 = list("panel.text", cities$lon, cities$tlat, cities$nomes,col="black", cex = 0.5)
# Criando os apontamentos
mark1 = list("panel.points", cities$lon, cities$lat, col="blue")

spplot(rn, "col_no",
       sp.layout=list(text1,mark1),
       main="Municípios RN",
       col=grey(.9), col.regions=myPalette)



# -----------------------------------
# Atividade, Marcell.



# TODO
