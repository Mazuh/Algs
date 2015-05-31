// Trabalho de autoria web. Meu primeiro envolvimento com JavaScript.

// funções de CONVERSOR ////////////////////////////////////////////////////////////////////////

function getBinario(dec){
    var bin = parseInt(dec, 10).toString(2);
    return bin;
}

function getDecimal(bin){
    var dec  = parseInt(bin, 2);
    return dec;
}

function conversor_DecToBin(){
    document.conversor.binario.value = getBinario(document.conversor.decimal.value);
}

function conversor_BinToDec(){
    document.conversor.decimal.value = getDecimal(document.conversor.binario.value);    
}

function limpaNaN(){
    visor1 = document.conversor.binario.value;
    visor2 = document.conversor.decimal.value;
    
    if (visor1 == "NaN")
        document.conversor.binario.value = "";
    if (visor2 == "NaN")
        document.conversor.decimal.value = "";
    
}

// funções DECIMAL ////////////////////////////////////////////////////////////////////////

var valor_temporario = 0.0;
var operacao = "";
var pontoIsDigitado = false;

function registrar(msg){
	document.getElementById("registros"). 
		innerHTML += msg + "<br/>";
}

function dec_inserir(x){
	document.decimal.visor.value += x;
}

function dec_ponto(){
    if (!pontoIsDigitado){
        
        if (document.decimal.visor.value == "")
            document.decimal.visor.value = "0.";
        else
            document.decimal.visor.value += ".";
        
    }
    pontoIsDigitado = true;
}

function dec_apagar(){
	document.decimal.visor.value = "";
	pontoIsDigitado = false;
}

function dec_somar(){
    valor_temporario = parseFloat(document.decimal.visor.value);
	dec_apagar();
	operacao = "soma";
}

function dec_subtrair(){
    if (document.decimal.visor.value == ""){
        document.decimal.visor.value = "-";
    }else{
        valor_temporario = parseFloat(document.decimal.visor.value);
        dec_apagar();
        operacao = "subtracao";
    }
}

function dec_dividir(){
	valor_temporario = parseFloat(document.decimal.visor.value);
	dec_apagar();
	operacao = "divisao";  
}

function dec_multiplicar(){
	valor_temporario = parseFloat(document.decimal.visor.value);
	dec_apagar();
	operacao = "multiplicacao";
}

function dec_potencia(){
	valor_temporario = parseFloat(document.decimal.visor.value);
    dec_apagar();
	operacao = "potencia";
}

function dec_raizquadrada(){
    resultado = Math.sqrt(parseFloat(document.decimal.visor.value), 2);
    registrar("<br/><span class='borda_decimal'>²√(" + document.decimal.visor.value + ") = " + resultado + "</span>");
    dec_apagar();
    document.decimal.visor.value = resultado;
}

function dec_igual(){

	var registro = "<br><span class='borda_decimal'>" + valor_temporario;
	
	switch(operacao){
		case "soma":
			var resultado = valor_temporario + parseFloat(document.decimal.visor.value);
			registro += " + ";
			break;
		
		case "subtracao":
			var resultado = valor_temporario - parseFloat(document.decimal.visor.value);
			registro += " - ";
			break;
		
		case "multiplicacao":
			var resultado = valor_temporario * parseFloat(document.decimal.visor.value);
			registro += " * ";
			break;
			
		case "divisao":
			var resultado = valor_temporario / parseFloat(document.decimal.visor.value);
			registro += " / ";
			break;
			
        case "potencia":
            var resultado = Math.pow(valor_temporario, parseFloat(document.decimal.visor.value));
			registro += " ^ ";
			break;
			
		default:
			var resultado = "";
			alert("Erro.\nOperação desconhecida.");
			registro = "<br/>*erro*";
			break;
	}
	
	operacao = "";
    valor_temporario = resultado;
    
	if (registro != "" && registro != "<br/>*erro*")
		registro += document.decimal.visor.value + " = " + resultado + "</span>";
	
    registrar(registro);
	dec_apagar();
    document.decimal.visor.value = resultado;
    
}

// funções BINÁRIAS ////////////////////////////////////////////////////////////////////////

var bin_valor_temporario = 0.0;
var bin_operacao = "";

function bin_inserir(x){
    document.binario.visor.value += x;
}

function bin_apagar(){
    document.binario.visor.value = "";
}

function bin_subtrair(){
    bin_valor_temporario = parseFloat(document.binario.visor.value);
    bin_operacao = "subtracao";
    bin_apagar();
}

function bin_multiplicar(){
    bin_valor_temporario = parseFloat(document.binario.visor.value);
    bin_operacao = "multiplicacao";
    bin_apagar();
}

function bin_somar(){
    bin_valor_temporario = parseFloat(document.binario.visor.value);
    bin_operacao = "soma";
    bin_apagar();
}

function bin_dividir(){
    bin_valor_temporario = parseFloat(document.binario.visor.value);
    bin_operacao = "divisao";
    bin_apagar();
}

function bin_igual(){

	var registro = "<br><span class='borda_binaria'>" + bin_valor_temporario;
	var a = parseInt(getDecimal(bin_valor_temporario));
    var b = parseInt(getDecimal(document.binario.visor.value));
    
	switch(bin_operacao){
		case "soma":
			var resultado = getBinario(a + b);
			registro += " + ";
			break;
		
		case "subtracao":
			var resultado = getBinario(a - b);
			registro += " - ";
			break;
		
		case "multiplicacao":
			var resultado = getBinario(a * b);
			registro += " * ";
			break;
			
		case "divisao":
			var resultado = getBinario(a / b);
			registro += " / ";
			break;
			
		default:
			var resultado = "";
			alert("Erro.\nOperação desconhecida.");
			registro = "<br/>*erro*";
			break;
	}
	
	bin_operacao = "";
    bin_valor_temporario = resultado;
    
	if (registro != "" && registro != "<br/>*erro*")
		registro += document.binario.visor.value + " = " + resultado + "</span>";
	
    registrar(registro);
	bin_apagar();
    document.binario.visor.value = resultado;
    
}
