
# main dataset: https://www.kaggle.com/cdc/zika-virus-epidemic
rzika <- read.csv('cdc_zika.csv')

# support dataset: https://www.kaggle.com/juanumusic/countries-iso-codes
countries <- read.csv('wikipedia-iso-country-codes.csv')


# Mostre, através de histogramas, os países com
# mais reports na base de dados.


for(code in countries['Alpha.2.code']){
  print(code)
}

print(x)
