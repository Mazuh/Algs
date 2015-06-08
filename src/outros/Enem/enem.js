/*
Tenho 15 semanas pra estudar as matérias do Enem.
Pra cada semana, há um conteúdo em cada disciplina a ser estudado.

Quero que saia na tela um documento relatório em que cada
página seja uma semana diferente, com seus seus conteúdos
divididos por disciplina.
*/

// inaugurando conhecimentos em json!
var disciplinas = Array(
    {
        "nome": "BIOLOGIA",
        "conteudos": [
            "Ecologia e Meio Ambiente – Parte 1",
            "Ecologia e Meio Ambiente – Parte 2",
            "Origem da Vida e Evolução",
            "Bioquímica",
            "Estrutura e Fisiologia Celular",
            "Ácidos Nucleicos",
            "Metabolismo Energético",
            "Histologia Animal",
            "Genética – Parte 1",
            "Genética – Parte 2",
            "Taxonomia – Parte 1",
            "Taxonomia – Parte 2",
            "Reino Animal",
            "Fisiologia – Parte 1",
            "Fisiologia – Parte 2"
        ]
    },
    {
        "nome": "FÍSICA",
        "conteudos": [
            "Conceitos Gerais",
            "O Movimento – Parte 1",
            "O Movimento – Parte 2",
            "Dinâmica – As Leis de Newton",
            "Equilíbrio",
            "Momento Linear",
            "Hidrostática",
            "Energia, Trabalho e Potência",
            "Gravitação",
            "Termologia",
            "Óptica Geométrica",
            "Ondas",
            "Eletrostática",
            "Eletrodinâmica",
            "Magnetismo e Eletromagnetismo"
        ]
    },
    {
        "nome": "QUÍMICA",
        "conteudos": [
            "Aspectos Macroscópicos",
            "Estrutura Atômica",
            "Tabela Periódica e Propriedades Periódicas",
            "Funções da Química Inorgânica",
            "Relações Numéricas",
            "Estequiometria",
            "Soluções",
            "Termoquímica",
            "Cinética Química",
            "Equilíbrio Químico",
            "Equilíbrio Iônico",
            "Eletroquímica",
            "Química Orgânica",
            "Isomeria",
            "Reações Orgânicas",
        ]
    },
    {
        "nome": "HISTÓRIA",
        "conteudos": [
            "Da Idade Média à Idade Moderna",
            "Expansão Marítima e América Colonial",
            "Renascimento e Reforma",
            "Colonização na América",
            "Revoluções Inglesas e Iluminismo",
            "Brasil: da Mineração à Independência",
            "Revoluções Francesas",
            "Independência da América Espanhola",
            "Século XIX: Itália, Alemanha e EUA",
            "Do Segundo Reinado à República",
            "Início do Século XX",
            "República Velha e Era Vargas",
            "Fascismo, II Guerra e pós-1945",
            "Redemocratização no Brasil",
            "Mundo Atual"
        ]
    },
    {
        "nome": "GEOGRAFIA",
        "conteudos": [
            "Estruturas Produtivas do Mundo",
            "Estruturas Produtivas do Brasil nas Cidades",
            "Estruturas Produtivas Brasileiras no Campo",
            "Geografia Urbana e seus Fenômenos",
            "Demografia, Dinâmica da População e Formação",
            "Sociocultural Brasileira",
            "A Globalização",
            "Cidadania",
            "Cartografia",
            "O Planeta Terra: Estrutura Interna e Litosfera",
            "O Planeta Terra: Atmosfera e Fenômenos Climáticos",
            "O Planeta Terra: Hidrosfera",
            "Domínios Ambientais Brasileiros",
            "Domínios Ambientais do Mundo",
            "A Questão Ambiental",
            "Atualidades"
        ]
    }
);
