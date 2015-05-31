// Alg pra Darlla.
public class InnerHTML{

    /*
    Retorna a propriedade innerHTML de uma tag.
    
    Argumentos de entrada (string, string, string):
    - html: todo (inteiro!) o HTML da página
    - tagAbertura: a tag* que abre o conteúdo
    - tagFechadura: a tag* que fecha o conteúdo
    *Tag incluindo <, > e seus atributos. Deve estar EXATAMENTE igual ou resulta em falha.
    Atenção: Os argumentos são case sensitive.
    
    Retornos possíveis (string):
    - "FALHA": as tags de início ou fim passadas por argumento não foram encontradas no argumento de html.
    - default: propriedade innerHTML solicitada, ou seja, todo o HTML entre as tags argumentadas.
    */
    public String getInnerHTML(String html, String tagAbertura, String tagFechadura){

        // encontra posição das tags de início e fim
        int inicioDaTag = html.indexOf(tagAbertura); // inclui tag!
        int fimDaTag = html.indexOf(tagFechadura);

        
        // segurança contra tags não encontradas
        if (inicioDaTag < 0 || fimDaTag < 0){
            // o método termina aqui mesmo
            return "ERRO";
        } // ELSE: continua, a substring pode ser encontrada
        
        
        // acha substring e a trata, removendo tag inicial inclusa
        String innerHTML = html.substring(inicioDaTag, fimDaTag);
        innerHTML = innerHTML.replace(tagAbertura, ""); // deleta tag

        
        // retorna o HTML no interior das strings
        return innerHTML;

    }



    
    /*
    TESTES -----------------------------
    */
    public static void main(String[] args){

        InnerHTML x = new InnerHTML();

        // html de uma página qualquer
        String html = "<!DOCTYPE html><html lang='pt-br'><head><title>Brincando com Darlla</title><meta charset='utf-8'/></head><body><h1>Brincando com Darlla! ;)</h1><p id='texto'>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p></body></html>";

        // abertura e fechadura da tag que cerca o conteúdo que eu quero acessar
        String tagAbertura = "<body>";
        String tagFechadura = "</body>";

        // usa o getter criado pra receber o html interior
        String innerHTML = x.getInnerHTML(html, tagAbertura, tagFechadura);

        // Descomente as linhas seguintes pra fazer o teste com uma tag diferente do body. É uma tag P com ID definido.
        /*
        tagAbertura = "<p id='texto'>";
        tagFechadura = "</p>";
        innerHTML = x.getInnerHTML(html, tagAbertura, tagFechadura);
        */

        // imprime o teste
        System.out.println(innerHTML);

    }


}
