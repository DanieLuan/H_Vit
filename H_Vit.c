#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>  // Bibliotecas

#define msgerro system ("color 0E");
#define processo HANDLE lanternadefeito = CreateThread(NULL, 0, lanternadefeituosa, NULL, 0, NULL);
#define p printf 
#define mix srand ( time(NULL) );
#define portugues setlocale(LC_ALL, "Portuguese");
#define limpa system("cls");
#define stop getch();
#define copia strcpy

#define grey system("color 8F");
#define blue system("color 3F");
#define ligon system("color F0");
#define ligoff system("color 07");
#define red system("color 47");
#define redy system("color 4E"); // Defines, simplificar c�digo.

static int gunbible = 0;
static int chavequarto0 = 0;
static int bilhetepeach = 0;
static int chavezelador = 0;
static int chaveelevador = 0;
static int toy =0;
static int goat = 0;
static int corda = 0;
static int visao = 0;
static int discernimento = 0;
static int queda =0;
static int cracked = 0;
static int fnly = 0;
static int g_q42=0;
static int g_qdc = 0;
static int g_sq46=0;
static int g_qes=0;
static int g_q33=0;
static int g_czn = 0;
static int g_sbl = 0;
static int g_rcp = 0;	
static int q48=0; 
static int q50=0;
static int chave50 = 0;
static int chavecorredor = 0;
static int pilulas = 0;
static int tentouabrirquartox = 0;
static int corr = 0;
static int l = 0;
static int ii = 0;
int i, decision; // V�riaveis est�ticas globais, a maioria para quebrar loop.

// Fun��es de Documentos.
void je1 () { // Jornal 01.
p("	\n\n	5 de Janeiro de 1984 -\n\n" 
	
			"\tABRE O HOTEL VITORIA\n\n"

			"\t� INAUGURADO HOJE O MAGNIFICO HOTEL VITORIA, DEPOIS DE 4 ANOS DA REFORMA DE UMA MANS�O DOS TEMPOS\n"
			"\tVITORIANOS. UMA FILA ENORME DE TURISTAS COM INTERESSE EM VEREM A REFORMA SE FORMOU NO DIA DA SUA\n"
			"\tINAUGURA��O. O GERENTE DIZ QUE ABRIR� VAGAS PARA HOSPEDAGEM A PARTIR DA SEMANA QUE VEM, QUERENDO\n"
			"\tNESSA SEMANA SOMENTE MOSTRAR COMO O HOTEL � PARA OS HABITANTES. POR SER A BEIRA MAR, E PROXIMA DA\n"
			"\tCAPITAL, ELE CR� QUE O FLUXO DE CLIENTES SER� GRANDE. E PROVAVELMENTE SER�, AFINAL, � O UNICO HOTEL DE\n"
			"\tTODO O PA�S QUE FOI FEITO A PARTIR DE UMA MANS�O VITORIANA. AL�M DISSO ELE � LOCALIZADO A BEIRA MAR,\n"
			"\tDEIXANDO OS SEUS HOSPEDES APRECIAREM UMA PAISAGEM EXUBERANTE DO MAR DO NORTE. H� AT� UM QUARTO SOMENTE\n"
			"\tPARA CRIAN�AS SE DIVERTEREM, E TAMB�M UM QUARTO ESPECIAL, COM ESPA�O EXTRA E MAIS CONFORTO.\n"

			"\tFICANDO A APENAS 60 MILHAS DE NEWCASTLE, VITORIA CONTA COM TR�S ANDARES SUPERIORES QUE ABRIGAM EXATAMENTE\n"
			"\tSESSENTA QUARTOS, UM SAL�O PRINCIPAL NO TERREO, COM QUARTOS DE FUNCIONARIOS E DO GERENTE E UM SUBSOLO, PARA\n"
			"\tPROPOSITOS MAIS TECNICOS.\n\n\n"
	
			"\tO QUE ANTES ERA UMA GRANDE RU�NA � HOJE UMA INCRIVEL ATRA��O TURISTICA QUE COM CERTEZA IMPULSIONAR� A\n"
			"\tECONOMIA DA PEQUENA CIDADE DE NOTHA.\n\n"); }
void je2 () { // Jornal 02
	p("\n\tVELHA GUARDA DE NOTHA CONTRA O HOTEL VITORIA\n\n"
		"\tCOM O CONSTANTE FLUXO DE TURISTAS E HABITANTES DE NEWCASTLE VINDO PARA O HOTEL VITORIA SE HOSPEDAREM, OS\n"
		"\tARREDORES DE NOTHA MELHORARAM BASTANTE ECONOMICAMENTE. AS PESSOAS PASSAM PELOS COMERCIOS DA CIDADE E COMPRAM\n" 
		"\tCOISAS, AL�M DE REALIZAREM BASTANTE PASSEIOS DE BARCO PELO MAR. OS HABITATENS MAIS JOVENS DE NOTHA, NA FAIXA\n" 
		"\t�TARIA DE 10 - 22 ANOS N�O TEM NADA A RECLAMAR. ELES DIZEM QUE O HOTEL FEZ MARAVILHAS PELA CIDADE. ENTRETANTO,\n" 
		"\tOS HABITANTES MAIS VELHOS PENSAM OUTRA COISA: ELES N�O DEVIAM TER CONSTRUIDO O HOTEL BEM NAQUELA �REA, TODOS\n" 
		"\tSABEM O QUE TEM ALI... N�O � COISA BOA. QUALQUER COISA CONSTRU�DA ALI EM CIMA EST� FADADA A SER.\n"
		"\tCONTAMINADA AO MAL. QUANDO QUESTIONADO POR QUAL MOTIVO, O Sr. ARTHUR CONNOR PREFERIU FICAR CALADO,\n"
		"\tSOMENTE RESPONDENDO L�,� MAL�GNO, PERGUNTE A QUALQUER UM COM IDADE O SUFICIENTE.\n\n"
		"\tO HOTEL VITORIA DIZ QUE EST� TUDO BEM E QUE N�O H� MOTIVO PARA PREOCUPA��O, E OS HABITANTES MAIS \n"
		"\tNOVOS FALAM QUE TUDO N�O PASSA DE SURPESTI��O.\n\n");
}
void je3() { // Jornal 03
		p("\tDESAPARECIMENTOS EM NOTHA INTRIGAM A COMUNIDADE\n\n"
		"\tV�RIOS DESAPARECIMENTOS TEM OCORRIDO NA PEQUENA DE \n\tCIDADE NOTHA, CONHECIDA SOMENTE POR SUAS PRAIAS E\n"
		"\tPELA ATRA��O TURISTICA QUE � O HOTEL VITORIA. A PRIMEIRA\n\tDESAPARECIDA FOI UMA GAROTA DE 08 ANOS CHAMADA\n"
		"\tNAT�LIA PEACH, UMA JOVEM TURISTA VINDA DA AM�RICA DO SUL PARA\n\tVISITAR A FAMILIA. SEU DESAPARECIMENTO FOI\n"
		"\tREGISTRADO EM OUTUBRO DE 1984, MAS NENHUM RASTRO DA GAROTA\n\tFOI ACHADO. AO ENTREVISTAR OS HABITANTES DA REGI�O\n"
		"\tELES SE RECUSAM A FALAR SOBRE O CASO, CONTUDO UM VELHO SENHOR\n\tFALA QUE \"� TUDO CULPA DAQUELE MALDITO HOTEL\", QUANDO");
		p("\n\tPRESSIONADO ELE SE RECUSOU A DAR MAIS DETALHES. A PEQUENA\n\tNATALIA ESTAVA SEMPRE COM SUA BONECA EM M�OS, ESTA QUE" 
		"\n\tTAMB�M SUMIU. PEACH N�O FOI A �NICA A DESAPARECER,\n\tMAIS DE 30 CASOS J� FORAM REGISTRADOS E O QUE ERA ANTES\n"
		"\tUMA SIMPLES CIDADE PACATA, PARA�SO DE TURISTAS, AGORA VIROU\n\tA ATEN��O DE TEORICOS DE CONSPIRA��O E POLICIAIS.\n"
		"\tNINGU�M SABE ONDE AS VITIMAS FORAM PARAR, PODERIA UM\n\tSERIAL KILLER EST� RONDANDO A REGI�O? TAL HIPOTESE �\n\n"
		"\tO papel est� rasgado e n�o � possivel ler o resto\n\n");
}
void je4() { // Jornal 04
		p("\t\nHOTEL VITORIA EST� A VENDA\n\n"
		  "GERENTE DO HOTEL, M. MILLERS, ANUNCIA PARA A VENDA O GRANDIOSO\n"
		  "HOTEL VITORIA. SEGUNDO ELE, QUEM ADQUIRIR TAL EMPREENDIMENTO,\n"
		  "EST� FEITO NA VIDA. QUANDO QUESTIONADO PELO MOTIVO DA VENDA, ELE\n"
		  "FALA QUE J� CONSEGUIU  TUDO QUE ERA POSSIVEL PARA ELE COM O HOTEL\n"
		  "E QUE EST� A BUSCA DE NOVOS DESAFIOS. ESTRANHAMENTE, O HOTEL EST�\n"
		  "A VENDA POR UM PRE�O BASTANTEBARATO, APENAS [inteligivel] DE EUROS.\n"
		  "QUANDO QUESTIONADO SOBRE A RAZ�O PELA QUAL ELE COLOCOU O HOTEL A \n"
		  "VENDA POR UM PRE�O T�O MODESTO, MILLERS RI E RESPONDE QUE N�O SE\n"
		  "IMPORTA COM DINHEIRO.\n\n");
}
void je5() { // Jornal 05
		p("\tM. MILLERS NA MIRA DA POLICIA.\n\n"
		"O GERENTE DO HOTEL M.MILLERS EST� SENDO\n"
		"PROCURADO PELA POLICIA. A ACUSA��O QUE ELE\n"
		"ENFRENTE � SOBRE TR�FICO HUMANO. UTILIZANDO\n"
		"DO HOTEL COMO FAIXADA PARA SEQUESTRAR PESSOAS\n"
		"E AS VENDEREM PARA CULTOS. MILLERS EST� FORAGIDO,\n"
		"MAS A POLICIA SUSPEITA DE QUE SEU NOME VERDADEIRO\n"
		"N�O SEJA ESSE. MAIS DE 40 PESSOAS SUMIRAM NA\n" 
		"REGI�O DE NOTHA, A POLICIA SUSPEITA DE QUE\n"
		"A MAIORIA DESSES SUMISSOS ESTEJA, DE ALGUMA\n"
		"RELACIONADA COM O HOTEL VITORIA. ENTRE ESSES\n"
		"DESAPARECIMENTOS, EST� UMA GAROTA DE 08 ANOS\n"
		"CHAMADA NA[inteligivel] E O HOTEL SER� FECHADO\n"
		"AT� SEGUNDA ORDEM.\n\n");
}
void jashes() { // Carta de J. Ashes
			p("	\n\tQUERIDA, PRECISAMOS PENSAR BASTANTE SOBRE N�S DOIS ANTES DE TOMARMOS UMA DECIS�O SOBRE ISSO.\n"
		"\tVOC� PEDIU UM TEMPO SOZINHA PARA PENSAR SE REALMENTE QUER O DIVORCIO, ENT�O EU VIM ME HOSPEDAR\n"
		"\tNO HOTEL VITORIA, PARA DAR TAL TEMPO � VOC�. O HOTEL � MAGNIF�CO, E OS SEUS FUNCIONARIOS S�O TODOS\n"
		"\tBEM TREINADOS. EMBORA S� TIVESSE DINHEIRO PARA FICAR UMA SEMANA, O GERENTE FOI GENTIL O SUFICIENTE\n"
		"\tPARA DEIXAR-ME FICAR MAIS TEMPO. ELE DISSESSE QUE QUERIA UM FAVOR DA MINHA PARTE. N�O SEI\n"
		"\tEXATAMENTE O QUE � AINDA E... C� ENTRE N�S... ESSE TAL DE MALCOLM MILLERS ME � UM TANTO QUANTO\n "
		"\tESTRANHO... � COMO SE ELE SEMPRE ESTIVESSE OBSERVANDO OS HOSPEDES DE SOLAIO. ENFIM, CREIO QUE VOC�\n"
		"\tTOMAR� A DECIS�O CERTA. SAIBA QUE EU AINDA TE AMO APESAR DE TODOS OS NOSSOS PROBLEMAS. POR FAVOR,\n "
		"\tPENSE BEM.\n\n"

		"\tJ. ASHES \n\n");
	}
void mmillers01 () { //Di�rio de M. Millers - Entrada 01
		p("QUANDO ME CASEI, JUREI SAIR DESSE MUNDO.\n"
		"NUNCA PENSEI QUE VOLTARIA PARA ELE. MENOS\n"
		"AINDA PENSEI QUE A CAUSA SERIA JUSTAMENTE\n"
		"A MINHA FAM�LIA. LEUCEMIA INFANTIL. OS DOUTORES\n"
		"DIZEM QUE N�O H� ESPERAN�AS. MAS... DINHEIRO\n"
		"COMPRA TUDO. TALVEZ AT� UMA VIDA. VOLTAREI A\n"
		"[inteligivel]... SE EU FOR PEGO, QUE SEJA\n"
		"AP�S [inteligivel] TER RECUPERADO SUA SA�DE.\n"
		"CREIO QUE ELA SABER� O QUE FAZER, AP�S ISSO\n"
		"DEIXAREI TODO O DINHEIRO EM UMA CONTA LIVRE\n"
		"FORA DO ALCANCE DAS AUTORIDADES.\n"
		"QUE DEUS ME PERDOE... QUE ELE ENTENDA\n\n");
}
void mmillers02() { // Di�rio de M. Millers - Entrada 02
	p(	"\n\n[...] UM ACORDO COM ELES. APESAR DE SUAS CREN�AS, ELES PARECEM\nSER UMA ORGANIZA��O S�RIA."
		"O ACORDO FOI DE QUE\nENVIARIA 15 POR ANO. SEM MAIS NEM MENOS. MAIS GERARIA DESCONFIAN�A\n E"
		"MENOS SERIA ARRISCADO DEMAIS COM POUCO LUCRO. COM\nSORTE, NINGU�M SUSPEITAR�. ELES PROVIDENCIARAM"
		"VERBA O SUFICIENTE\nPARA CUIDAR DE PROBLEMAS LEGAIS. PERGUNTEI POR QUE ELES\n"
		"N�O FAZEM ISSO ELES MESMOS. ELES\nDISSERAM QUE \"O PECADO REPOUSAR� SOMENTE COM VOC�\". POR\nMIM"
		"EST� BOM, SE TENHO QUE IR AT� O INFERNO PARA CONSEGUIR UMA CURA\n � PARA L� QUE IREI.\n\n");
}
void mmillers03() { // Di�rio de M. Millers - Entrada 03
	p("	\n\n\tOS NEGOCIOS EST�O INDO BEM ESSE ANO, CADA VEZ MAIS E MAIS TURISTAS VISITAM O HOTEL. TIVE ALGUNS\n" 
		"\tPROBLEMAS RELACIONADOS A PAGAMENTO, MAS DEMITI ALGUNS FUNCIONARIOS E LOGO TUDO VOLTOU AO NORMAL.\n"
		"\tO DINHEIRO TEM QUE FLUIR, ASSIM COMO AS PESSOAS. [Parte inteligivel]... DESCONFIAM\n"
		"\tDE NADA. UM DELES VEIO INVESTIGAR, MAS TENHO CERTEZA QUE ELA N�O ACHOU NADA DE ESTRANHO. FIZ COM QUE\n "
		"\tELA N�O ACHASSE NADA DE ESTRANHO, PARA SER MAIS ESPECIFICO. OS NEGOCIOS TEM DE CONTINUAR, N�O IMPORTA\n"
		"\tCOMO. AT� EU CONSEGUIR [inteligivel] OS NEG�CIOS CONTINUAR�O.\n\n");
}
void susan() { // Di�rio de Susan Beth
		p("\n\tESTOU AQUI H� UMA SEMANA E N�O DESCOBRI NADA. SE REALMENTE TIVER ALGO MACABRO\n"
		"\tOCORRENDO NESSE HOTEL, ELES PARECEM MANTER ISSO EM SEGREDO DE FORMA EXTRAMENTE\n"
		"\tEFICIENTE. MAS, N�O CREIO QUE UM LUGAR T�O ACONCHEGANTE ASSIM POSSA TER ALGO DE\n"
		"\tIL�CITO... O GERENTE AT� SE OFERECEU PARA ME SERVIR O PRATO ESPECIAL. ELE DIZ QUE\n"
		"\tSER� A MELHOR COISA QUE PROVAREI EM VIDA.\n\n"					
		"\t\t\t\t\t\t\t-SUSAN BETH\n");
}
void zimmerman() { // Di�rio de Albert Zimmerman
		p("UMA CRIAN�A � DEMAIS, N�O IMPORTA OS MOTIVOS\n"
		"DE MILLERS. ELA ERA S� UMA GAROTA, COM TODO\n"
		"O FUTURO PELA FRENTE... E AGORA... DEUS, �\n"
		"MELHOR QUE ELA ESTEJA MORTA... DEUS, � MELHOR\n"
		"SE EU MATA-LA. SE AQUELES BASTARDOS COLOCAREM\n"
		"A M�O NELA... A MORTE � MELHOR QUE AQUILO,\n"
		"DISSO TENHO CERTEZA.\n\n"
		"QUE ELA POSSA ENTENDER. SER� INDOLOR\n\n"
		"REZEM POR ELA. E POR MIM.\n"
		"\t\t\t\tA. ZIMMERMAN\n\n");
}

//Fun��es Especiais
DWORD WINAPI lanternadefeituosa(void* data) { // Efeito de Lanterna Defeituosa
    static int semente;
    static int bb = 1;
    static int aa;
  while (ii < 1) {
    srand ( time(NULL) );
      aa = rand() % (bb * 10); 
        if (aa % 2 == 0) 
        ligon
        else if ( aa % 3 == 0)
        ligoff
    Sleep(150);
        bb++; }
  return 0;
}

// Fun��es Simples (Introdu��es)
void introducao() { // Fun��o de Introdu��o - Quarto 42
	p("\tAcordo em uma sala totalmente escura... n�o lembro como vim parar aqui. A �nica poss�vel fonte\n"

	"\tde luz, a janela, est� trancada com peda�os de t�bua marretadas na parede. A chuva martela contra\n"
	"\ta janela, uma  tempestade parece estar ocorrendo do lado de fora. Um sentimento estranho acompanha\n"
	"\tmeu despertar.\n\n");
	p("\tAp�s algum tempo, minha vis�o se acostuma com a escurid�o e sou capaz de discernir a forma\n"
	"\tde uma porta e alguns objetos ao meu redor. Espalhados pela sala, vejo uma chave, uma bolsa e\n"
	"\tuma lanterna. Eu...\n\n");
	stop
	limpa
	stop}
void corredorint() { //Fun��o de Introdu��o - Corredor
	  p("\tO Corredor est� totalmente escuro salvo um feixe de luz que ilumina uma pequena parcela\n"
		"\tdele. Ligo a lanterna e algo passa rapidamente sobre mim, isso foi um vulto? parecia\n"
		"\tpequeno... Talvez eu esteja imaginando coisas. A porta pela qual sa� tem a numera��o 47.\n\n"
		"\tAponto minha lanterna para as outras portas. Ao meu lado est�o os quartos 48 e 46. Na minha frente,\n"
		"\th� um quarto com a numera��o apagada... � como se os numeros tivessem sido arrancados a for�a da\n"
		"\tporta.\n\n"
		"\tH� varios outros quartos pelo corredor, e ao final deste h� uma porta. Eu...\n"); 
	stop }
void subsoloint() { // Fun��o de Introdu��o - Subsolo
	processo
	if (lanternadefeito) 
    Sleep(100);
	
	p("\tA lanterna se apaga constantemente. Creio que a queda a danificou.\n\n");
	Sleep(1200);
	p("\tEstou no meio de um sal�o totalmente oval. Consigo discernir um comodo cheio de pratos\n"
	"\tlimpos e panelas a minha esquerda. A cozinha. As demais portas est�o trancadas e alguns corredores\n"
	"\tbloqueados por entulho. Obra do tempo ou de algu�m? Nos corredores n�o bloqueados, acho uma porta\n"
	"\tnomeada \"Almoxarifado\" e, ao lado  dela, uma sem nome algum. Nem numera��o. O corredor central me leva\n"
	"\tat� uma escadaria, com uma grande porta de madeira no final\n");
	stop
	limpa
}
void hallint() { // Fun��o de Introdu��o - Hall de Entrada
	int pifar;
	for ( pifar = 0 ; pifar < 10; pifar ++) {
		ligoff
		Sleep(300);
		ligon }
	ligoff
	limpa
	Sleep(1000);
	p("Minha lanterna pifa de vez...");
	stop
	limpa
	p("Ap�s um tempo, minha vis�o se acostuma\n" 
	"com a escurid�o e sou capaz de ver\n"
	"o enorme hall de entrada.\n\n"
	"Entretanto, boa parte dele\n"
	"est� bloqueado por entulhos.\n"
	"As �nicas partes acessiveis que\n"
	"posso ver s�o o elevador, que se\n encontra no segundo andar, onde acordei, a\n"
	"recep��o e um quarto com um 0\n"
	"dourado talhado.\n\n"
	"Uma porta de mogno enorme se extende.\nO �nico obstaculo entre mim e a liberdade\nmas... H� algo que tenho "
	"que fazer...\nAlgo que me chama... no 3� andar.");
	stop
	limpa
}

// Fun��es de Jogabilidade 
void quarto42()  { // Fun��o - Quarto 42

	int dec;
	static char u[256] = "1. Pego a bolsa, pode ser util para carregar objetos.\n";
	static char d[256] = "2. Pego a lanterna.\n";
	static char t[256] = "3. Confiro a chave.\n";
	static char q[256] = "4. Olho mais um pouco ao redor, talvez eu tenha deixado de notar algo.\n";
	static char c[256] = "5. Grito, talvez alguem me escute.\n";
	static char sei[256] = "6. Tento abrir a porta\n";
	static char set[256] = "7. Tento usar a chave na porta.\n";
	static int tentou=0, sair=0, os=0;
	if (os == 0) 
	p("%s%s%s%s%s%s",u, d, t, q, c, sei); 
	else
	p("%s%s%s%s%s%s%s",u, d, t, q, c, sei, set);
	scanf("%d", &dec);
    limpa 
	if (dec ==1) {
		strcpy(u, "");
		p("\tPego a bolsa, pode ser util para carregar objetos. Ela � uma bolsa escolar totalmente preta.\n"
			"\tDentro dela, encontro o recorte de um jornal datando de 05 de janeiro de 1984.\n");
		je1();
		printf("");
		p("\tEnt�o � aqui que estou... mas por qu�? E por qu� n�o consigo me lembrar de nada? As perguntas pairam no \n"
		"\tar, decido que tenho de sair daqui: Esse lugar me d� uma sensa��o estranha... Guardo o jornal dentro \n "
		"\tda bolsa, talvez haja mais recortes como esse por ai. Eu... \n"); 
		sair++; 
		}
	else if (dec ==2) { 
		strcpy (d, "");
		p("\tPego a lanterna e a ligo. � uma lanterna a pilha comum, prateada e com uma especie de pulseira para\n" 
		"\tfixa-la na m�o. Vou mant�-la comigo, ser� util quando precisar de ilumina��o em um canto realmente\n"
		"\tescuro. \n");
		sair ++; 
		ligon}	
	else if (dec ==3) {
		strcpy (t, "");
		p("\tConfiro a chave. Ela � dourada e tem uma forma estranha, parece ser bastante antiga\n"
		"\te feita de um bom metal pois n�o mostra sinais de ferrugem. Guardo a chave no bolso, talvez \n"
		"\tseja util mais tarde. Ap�s isso, ...\n");
		sair ++;
		os = 1;  } 
	else if (dec ==4) {
		strcpy (q, ""); 
		
		p("\tOlho mais um pouco ao redor, talvez eu tenha deixado de notar algo. \n \n");
		p("\tAcho um bilhete em cima de uma mesa, a caligrafia me � extremamente familiar, embora n�o consiga \n"
		"\tlembrar o porqu�. escrito nele est� N�O SAIA DA MANS�O, inumeras vezes... mas a tinta n�o � preta,\n"
		"\t� vermelha, e... � estranha, como se n�o fosse realmente tinta. Coloco o bilhete no bolso. Ap�s algum tempo ...\n"); }
	else if (dec ==5) {
		strcpy(c, "");
		p("\tGrito, talvez algu�m me escute. \n"
		"\tMeu grito ecoa na sala, mas nada parece t�-lo ouvido. Eu... \n"); }		
	else if (dec == 6){
	if (sair != 3 && tentou > 0) {
			p("\tTento abrir a porta novamente. Continua trancada. Eu... \n"); }	
	else if (sair == 3 && tentou > 0) {
			p("\tTento abrir a porta de novo e ela... abre? Que estranho, eu poderia jurar que ela estava\n"
			"\tfechada. Saio do quarto.\n\n");
      stop
			g_q42++;
			limpa} 
	else if (sair != 3) { 
			p("\tTento abrir a porta. Est� trancada, como vou sair daqui? Volto,\n	talvez eu tenha perdido algo. Ent�o eu ...\n");
			tentou ++; }
	else if (sair == 3) { 
			p("\tTento abrir a porta. Ela abre com um rangido que indica antiguidade.\n"
			"\tSaio do quarto. \7\n\n");
      		stop
			g_q42++;
			limpa} 
		}
	if (dec ==7 && os == 1) { 
			strcpy(set, "");
			p("\tTento usar a chave na porta. Ela n�o encaixa. Ponho ela de volta\n"
			"\tno bolso e... \n"); }
			
	stop }
void quarto46() { // Fun��o - Quarto 46 


int decision;
	static int sair = 0;
  	static int saindo;
	static int segredo = 0;
 	static int sairquarto46 =0;
	static char uno[256] = "1. Vou at� a janela aberta.\n";
	static char duno[256] = "2. Checo o quarto.\n";
	static char tres[256] = "3. Checo a carta.\n";
	static char cuatro[256] = "4. Recolho as pilhas de lanterna.\n";
	static char cinco[256] = "5. Saio do quarto.\n";
		if (segredo == 0) 
			printf("%s%s ", uno, duno);
		else 
			printf("%s%s%s%s%s ", uno, duno, tres, cuatro, cinco);
		scanf("%d", &decision);
		limpa
		
	if(decision == 1)  {
			strcpy(uno, "");
			p("\tVou at� a janela aberta. O mar � uma infinid�o azul na minha frente.\n"
			"\tPosso ver um farol apagado numa pequena peninsula. � dificil precisar as horas\n"
			"\tcom a tempestade, pode ser qualquer hora entre 3PM e 5PM. � uma vista realmente\n"
			"\tbela. Ap�s admirar a vista, ...\n");	
			l++; 
		}		
		else if(decision == 2)  {
		strcpy(duno, "");
			p("\tCheco o quarto. Acho um envolope na cabeceira da cama de casal e algumas\n"
				"\tpilhas de lanterna no ch�o.");
				segredo++;
				l++;	}		
	if (decision == 3 && segredo !=0) {
			strcpy(tres, "");
				p("\tCheco o envolope. Abro ele, dentro h� uma carta. O nome do destinat�rio est� riscado,\n"
					"\te a data borrada, mas pelo estado do papel parece bastante antigo. Pertencia a um homem\n"
					"\tchamado J. Ashes\n");
					jashes();
					p("\tPor que essa carta nunca foi enviada? Tem algo acontecendo nesse hotel... Tenho que sair\n"
					"\tdaqui. Eu...\n");
					l++; }
	if (decision == 4 && segredo !=0) {
			strcpy(cuatro, "");
				p("\tRecolho as pilhas de lanterna do ch�o. Se a pilha acabar, agora tenho uma reserva.\n"
				"\tMe levanto e...\n");
				 l++;
		}
			if (decision == 5 && l > 3) 
				g_sq46 = g_sq46 + 1;
     		 if (decision == 5 && l < 3)
       p("\tAinda tem algo que preciso fazer aqui. Eu...");
			stop
			limpa }
void quarto48() { // Fun��o - Quarto 48

	static int dec;
	static int destrancar = 0;
	static int segredo = 0;
	static char oni[256] = "1. Tento sair do quarto.\n";
	static char tchu[256] = "2. Checo ao redor.\n";
	static char tree[256] = "3. Confiro a pagina.\n";
	static char foour[256] = "4. Pego a chave.\n";
	static char faive[256] = "5. Confiro a foto.\n";
		
		if (segredo == 0)	
			printf("%s%s", oni, tchu);
		
		else
		printf("%s%s%s%s%s", oni, tchu, tree, foour, faive);	
	scanf("%i", &dec);
	limpa
		if(dec == 1)  {
		if (destrancar != 2) {
					p("\tTento sair do quarto. A porta esta emperrada. Como eu\n "
					"\tVou sair daqui? Eu..."); }
				else  {
				p("\tTento sair do quarto. A porta... n�o est� mais emperrada?\n"
				"\tIsso est� ficando estranho. Volto ao corredor. Eu...\n");
				q48++; 
				stop
				limpa}
	} 
		if (dec == 2) {
				copia(tchu, "");
				p("\tCheco ao redor. Vejo uma pagina rasgada no ch�o, uma chave\n"
				"\te uma foto na escrivaninha.");
				segredo++; }	
		if (dec == 3 &&  segredo > 0) { 
				copia(tree, "");
				p("\tConfiro a pagina. � um peda�o de pagina de um di�rio rasgada.\n"
				"\tPertencia a um homem chamado M Millers\n");
					mmillers03();
					p("	\n	Entregas? Como assim? Tenho certeza que Millers n�o era s� um gerente de hotel. H�\n"
				"\talgo por tr�s do Hotel Vitoria... Mas n�o sei o que �. Talvez valha a pena\n"
				"\tinvestigar, talvez tenha haver com o motivo de eu estar aqui. Eu...\n");
				destrancar ++;}
		if (dec == 4 &&  segredo > 0) {
				copia(foour, "");
				p("\tPego a chave. Na cabe�a desta est� escrito '50'. A guardo e...\n");
				destrancar ++;
				chave50++;
			}
		if (dec == 5 && segredo > 0) {
					copia(faive, "");
					p("\tConfiro a foto. Nela est� o hotel Vitoria com um homem, que creio ser\n"
				"\tMillers cortando a faixa de inaugura��o. Seu sorriso � mais do que feliz �...\n"
				"\tDoentio. Deixo a foto onde estava e...\n");	}
			stop
			limpa
			}		
void quarto50() { // Fun��o - Quarto 50
    static int dec;
	static int k = 5;
	static int os = 0;
	static char o1[256] = "1. Checo ao redor.\n";
	static char o2[256] = "2. Pego o guarda chuva.\n";
	static char o3[256] = "3. Pego a chave.\n";
	static char o4[256] = "4. Confiro o Jornal\n";
	static char o5[256] = "5. Checo o banheiro\n";
	static char o6[256] = "6. Volto ao corredor.\n";
	
	if (os !=0 && k == 0) 
		printf("%s", o6);
	
	else if (os != 0) 
		printf("%s%s%s%s%s", o1, o2, o3, o4, o5);
	else
		printf("%s", o1);
		
	scanf("%i", &dec);
	limpa
	if (dec == 1) {
		copia(o1, "");
		p("\tExamino ao redor. Acho ent�o um guarda chuva, uma escrivaninha com\n"
		"\tuma chave em cima, outro recorte de jornal em cima da cama e vejo que aqui\n"
		"\th� tamb�m um banheiro. Paro de examinar.\n");
		os++;
		k --; }
	
	else if (dec == 2) {
	
		copia(o2, "");
		p("\tPego o guarda chuva e o guardo na bolsa. A chuva incessante\n"
		"\tcontinua do lado de fora, vou precisar dele quando conseguir sair.\n"
		"\tSe eu conseguir sair.\n");
		k --; }

	if (dec == 3 && os != 0) {
		copia(o3, "");
		p("	Pego a chave. N�o tem marca��o nela. A guardo e...");
		chavecorredor++;
		k --;
	}
	if (dec == 4 && os != 0) {
		copia(o4, "");
		p("	Confiro o recorte de jornal. Esse data de 02 de Fevereiro de 1985\n");
			je2();
		p("\tAlgo... mal? Cada vez mais, esse hotel parece ser mais do que realmente �.\n"
		"\tPreciso sair logo daqui. Eu...\n");
		k --;
	}
	if (dec == 5 && os != 0) {
		copia(o5, "");
		p("\tCheco o banheiro...\n");
		Sleep(1600);
		limpa
		ligoff
		Sleep(1000);
		p("\tA minha lanterna para de funcionar do nada e de repente...\n");
		limpa
		p("\tOu�o um barulho... estranho\n");
		Sleep(1200);
		limpa
		Sleep(1500);
		ligon
		p("\tA minha lanterna volta ao normal... o barulho se esvai.\n\tCacos de vidro se espalham por todo o ch�o.");
		p("\n\tO que foi isso?\n\n");
		stop
		limpa
		p("\tO vidro est� quebrado e a privada seca. Na pia, h� um vidro\n"
		"\tde remedios. 3 pilulas se encontram dentro. Um papel comum foi pregado com fita adesiva\n"
		"\tao redor do vidro, substituindo a bula arrancada. No papel se l� 'Para Alucina��es'. Pego\n"
		"\trem�dio. Nunca se sabe quando pode ser util, o guardo na minha bolsa e volto at� \n"
		"\to quarto. Ent�o...\n");
		stop
		pilulas = 3;
		k --; }
	if (dec == 6 && k == 0) {
		p("\n\tVolto ao corredor.\n\tPara que serve essa chave? Eu...");
		q50++;
		
		stop 
		limpa}	
	stop }
void corredor() { // Fun��o  - Corredor


	static int dec;
	static int bater = 0;
	static int os = 0;
	static int sair = 0;
	static int quebra = 0;
	static int tentou = 0;
	static char u[256] = "1. Tento abrir a porta 46.\n";
	static char d[256] = "2. Tento abrir a porta 48.\n";
	static char t[256] = "3. Confiro a porta 52.\n";
	static char q[256] = "4. Confiro a porta 49.\n";
	static char c[256] = "5. Confiro o quarto sem numera��o.\n";
	static char sei[256] ="6. Checo a porta ao final do corredor.\n";
	static char porta46[256] = "\tA porta � velha, est� trancada mas \n	parece que vai ceder a qualquer chute... \n\n";
	printf("%s%s%s%s%s%s", u, d, t, q, c, sei);
	scanf("%i", &dec);
	
	limpa
	if (dec ==1) {
			if (quebra !=3) {
		copia(u, "1. Chuto a porta\n");
		p("%s", porta46);
		copia(porta46, "");	

		p("\tChuto a porta. Nada acontece.\n");
			quebra++;
			stop } 
			
			else {
      limpa
			p("\tA porta finalmente abre com um estrondo, revelando uma su�te de hotel \n"
					"\tcomum, com camas arrumadas e uma janela aberta. \n\n" 
					"\tUma fria brisa me atinge. Eu... \n");
					
            stop
            limpa
            
					while (g_sq46 == 0)
						quarto46();
				p("\tSaio do quarto.\n"
				"\tEstou de volta ao corredor, ...\n");
			strcpy(u, "");
			stop
			limpa; 
			} 
			}
	else if (dec ==2) { 
		
		p("\tTento abrir a porta 48, e, para minha surpresa, ela\n" 
			"\test� aberta. Sem chutes dessa vez. Adentro o quarto\n");
			stop
			limpa
			p("\tAssim que entro, a porta fecha atr�s de mim. Foi uma\n"
			"\tcorrente de vento? Eu...\n"); 
			stop
			limpa
		while (q48 == 0) 
			quarto48();
		strcpy (d, "");
			}

	else if (dec ==3) {
		strcpy (t, "3. Tento me comunicar.\n");
			if (bater != 1) {
			limpa
		p("	Confiro a porta 52. Ou�o um... constante choro vindo de tr�s da porta. Eu...");
		bater ++;; 
		stop}
			
			else {
			p("\tTento me comunicar. Pergunto se tem algu�m ai, digo que estou perdido e que\n"
	"\tn�o lembro de quem sou. O choro para e se torna numa risada. Come�a baixa, mas\n"
	"\tlogo vai aumentando, alcan�ando niveis que uma garganta humana seria incapaz\n"
	"\tde produzir. Minha adrenalina sobe. Um senso de perigo emana da porta. Me\n" 
	"\tpreparo para correr para longe, a risada insana aumenta ainda mais e de repente para,\n" 
	"\tindo embora juntamente com a sensa��o de perigo, restando somente a memoria de uma\n" 
	"\tamea�a. O que foi isso? Tenho de sair logo daqui. N�o quero saber se a porta est� aberta,\n"
	"\ttemo o que possa haver atr�s dela, ent�o eu...\n");
		stop
		copia(t, ""); } 
		}
	else if ( dec == 4) {
		copia(q, "");
		limpa
		p("\tConfiro a porta 49. Ou�o um ruido de um r�dio fora da esta��o. Como pode\n"
		"\tl� dentro haver um r�dio se n�o tem eletricidade em lugar algum? A porta\n "
		"\test� trancada eu...");
		stop
		 }
	else if (dec == 5 && chave50 != 1 ) { 
		p("Confiro o quarto sem numera��o. Est� trancado. Volto e...\n");
		tentou++;
		 stop
		 } 
	else if (dec == 5 && chave50 != 1 && tentou > 0) {
		p("\tConfiro novamente o quarto sem numera��o. Ainda est� trancado. Eu...");
		stop 
		}		
	else if (dec == 5 && chave50 > 0) {
		p("\tConfiro o quarto sem numera��o. Encaixo a chave 50 e giro. Para minha surpresa\n"
		"\ta porta abre. Ent�o, esse � o quarto 50. \n\n");
		stop
		limpa
		p("\t� um quarto identico aos outros, as janelas tamb�m est�o tampadas com t�bua e\n"
		"\ta escurid�o � total, salvo pelo que consigo iluminar com a lanterna. Eu...\n");
		stop
		limpa
		while( q50 == 0) {
		quarto50();
		limpa; } 
		stop 
		copia( c, "");
		} 		
	else if (dec == 6) {
		if (chavecorredor == 0) {
		
			printf("\tCheco a porta ao final do corredor. Est� trancada. Volto e...");
			stop}
		else {
			p("\tCheco a porta ao final do corredor. Coloco a chave sem numera��o nela.\n"
		"\tA porta desliza suavemente, revelando uma escadaria larga com tapete vermelho.\n"
		"\tAvan�o nela, descendo-a.\n");
		corr++;
		stop}  
		}
		
		limpa } 	
void andar1int() { // Fun��o - Andar 1 - Introdu��o

	static int injerir = 0;
	static int dec;
	static int engolir;
	static char hmm[256] = "1. Troco as pilhas da lanterna\n";
	static char eng[256] = "0. Tomo um, que mal pode fazer?\n";
	static char naoeng[256] = "1. N�o tomo. S� Deus sabe h� quanto tempo eles est�o naquele banheiro\n";
		
	p("\tAs pilhas da lanterna acabam por um instante e eu...\n");
		ligoff
		stop
		limpa

	p("%s\n", hmm);
		start:
		scanf("%d", &dec);
		
	if (dec == 1)  
	
			limpa
			p("\tTroco as pilhas da lanterna, fazendo-as iluminar o caminho. Vejo um vulto novamente... Seria coisa da\n\t"
			"minha cabe�a? Tem algo me seguindo? Tor�o para que n�o.\n");
			stop
			limpa 
			ligon
			p("\tIlumino os arredores com minha lanterna.\n");
			stop
			limpa
			p("\tTudo est� estranhamente conservado. Se n�o fosse pela poeira que permeia os moveis, eu poderia at�\n\t"
			"dizer que o hotel est� em horario de funcionamento. Se n�o fosse pelo sil�ncio tamb�m. O grande e\n\t"
			"assustador vazio de barulho. Come�o a perceber mais minha respira��o.\n\n\t"
			"Ao longo do corredor vejo os quartos 30, 33, 34 e 38. Um quarto denominado \"Su�te Especial\" est� na\n\t"
			"minha frente. Deve ser aquele que li no jornal.\n\tUma esp�cie de playground em forma de quarto se encontra pr�ximo... parece peculiar,\n\t"
			"para dizer o m�nimo. No final do corredor, h� uma especie de buraco no assoalho.  A porta para o terreo \n\tn�o se encontra em local algum.\n\n"
			"\tDecido examinar o vidro de rem�dios");
			injerir++;
			stop
			limpa
			copia(hmm, ""); 
		
			
			
	if (dec != 1) {
		goto start;}
 		
	if (dec == 1 && injerir != 0) {
		limpa
		p("%s%s", eng, naoeng);
		scanf("%d", &engolir); 
		}
		
		if (engolir == 0 ) {
				limpa
				p("\tSinto o efeito imediatamente. � como se um peso sumisse\n\tda minha mente. Eu...\n");
				stop
				limpa
				visao ++;
				 }
		else if (engolir == 1) {
				limpa
				p("\tN�o os tomo. Quem sabe que tipo de efeitos colaterais poderiam ter?\n");
				stop
			 }
			stop
			limpa
		}			
void quartoespecial() { // Fun��o - Quarto Especial
		static int y;
		static int dec;
		static int m0 = 3;
		static char m1[256] = "1. Confiro as janelas\n";
		static char m2[256] = "2. Pego o recorte de jornal\n";
		static char m3[256] = "3. Confiro o bilhete\n";
		static char m4[256] = "4. Saio do quarto\n"; 

		if (m0 != 0) 
			p("%s%s%s", m1, m2, m3);
		else 
		 	p("%s%s%s%s", m1, m2, m3, m4);
	scanf("%d", &dec);
		
		if(dec == 1) 	{
			copia(m1 , "");
			limpa
			p("\tUma pequena vila salta aos meus olhos. Parece estar totalmente vazia... seria isso Notha?\n");
			p("\tO que aconteceu? Por que n�o h� ningu�m? As perguntas pairam no ar... Me viro.\n");
			stop
			m0 --;
			
			
		}
	
			

		else if(dec == 2) {
			copia(m2 , "");
			limpa
			p("\tO recorte data de 28 de abril de 1986\n\n");
			je3();
			stop
			p("\tQuem era Peach? Poderia ela ser...");
			stop
			ligoff
			stop
			limpa
			red
			for (y = 0 ; y < 60 ; y ++   ) {
				Sleep (150);
				p("SAIADAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUISAIADAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUISAIDAQUI");
				if ( y % 2 == 0) 
				p ("MEDEVOLVEMINHA");
				if (y % 10 == 0  )
				p("PARASEUPROPRIOBEM");
			}
			stop
			limpa
			ligon
			p("\tO que foi isso? Essa voz era... uma crian�a? Peach?\n\tPreciso sair logo daqui...\n");
			stop
			m0 --; }
		
		else if(dec == 3) {
			copia(m3 , "");
			limpa
			p("\tAcho um bilhete na mesma caligrafia do peda�o de papel que encontrei\n");
			p("\tno quarto em que despertei. A mensagem est� na escrita na mesma... tinta?\n\t");
			p("\"NEM TODOS S�O REAIS\" \n\n\tGuardo o bilhete... seria isso uma esp�cie de dica? Quem as escreveu?");
			m0 --;	}
		
		if(dec == 4 && m0 == 0) {
			copia(m4 , "");
			limpa
			p("\tSaio do quarto, desejo n�o entrar aqui novamente.\n\tEstou de volta ao corredor. Eu...\n");
			stop
			limpa
			g_qes++;	} 
			}			
void quartodascriancas() { // Fun��o - Quarto das Crian�as
	static int random;
	static int arma;
	static int dec;
	static int decp;
	static int getout = 1;
	static char one[256] = "1. Procuro pelo quarto\n";
	static char two[256] = "2. Examino os brinquedos\n";
	static char three[256] ="3. Volto ao corredor.";
	static char plusone[256] ="1. Entro pela porta \"SIM\"\n";
	static char plustwo[256] = "2. Entro pela porta \"N�O\"\n";
	
	if (getout == 0) 
		p ("%s%s%s", one, two, three);
	else 
		p("%s%s", one, two);
	scanf("%d", &dec);
		limpa
	
	if (dec == 1) {
		copia(one, "");
		getout --;
		if (visao != 0) {
			mix
			rand() % 1 == random;
				if (random % 2 == 0) {
					p("\tAchei uma... biblia? N�o consigo lembrar se acreditava ou n�o em Deus.\n\tMas dado tudo que\n"
					"\testou passando aqui, talvez n�o seja ruim\n\tcarrega-la por ai.");
					gunbible = 2; }
				else {
				
					p("\tAchei uma... pistola! Ela se encaixa naturalmente em minha m�o. � como se\n\t"
					"eu j� soubesse como manusea-la. O metal frio aumenta minha sensa��o de seguran�a\n");
					gunbible = 1; }
				}
		else {
			p("\tQu�? Tem duas portas no quarto... Como n�o as tinha percebido antes?\n");
			p("\tElas est�o do lado uma da outra. No espa�o entre as duas, h� uma pergunta\n");
			p("\t\"Voc� acredita em Deus?\"\n");
			p("\tNa porta da esquerda, h� um SIM, na da direita, um N�O\n");
			stop
			limpa
			p("%s\n%s\n", plusone, plustwo);
			scanf("%d", &decp);
				if (decp == 1) {
							p("\tEntro pela porta \"SIM\". N�o tenho certeza, mas acho que eu acreditava.\n"
							"\tAcho uma biblia. Talvez n�o seja ruim carrega-la por ai.\n");
							gunbible = 2;
							ligoff
							stop
							limpa
							p("\tA lanterna apaga de novo. Ou�o varias vozes de crian�a me saudando\n"
							"\tBEM VINDO AO INFERNO, elas dizem.\n");
							stop
							ligon
							limpa
							p("\tA lanterna volta.\n\tA biblia me d� um pouco de seguran�a\n"); }
					else if (decp == 2) {
							p("\tEntro pela porta \"N�O\". N�o creio que acreditava.\n"
							"\tAcho uma pistola. Ela se encaixa naturalmente em minha m�o.\n");
							gunbible = 1;
							stop
							ligoff
							limpa
							p("\tA lanterna apaga do nada. Ou�o varias vozes de crian�a, um aviso:\n"
							"\tO INFERNO � REAL, VOC� EST� NELE AGORA, elas dizem\n");
							stop
							ligon
							limpa
							p("\tA lanterna volta. Agarro a arma, o metal frio me d� confian�a."); 
							}
							}
							} 
							
	else if (dec == 2) {
		copia(two, "");
		p("\tAcho uma boneca de trapos. Seria essa boneca a que... Talvez.\n\tA guardo.\n");
		toy++; }
	
	if (dec == 3 && getout == 0) {
		g_qdc++;
		copia(three, "");
		p("\tN�o h� mais nada aqui. Volto ao corredor\n"); }
		
	}
void quarto33() { // Fun��o - Quarto 33

	static int os = 0;
	static int dec;
	static char l1[256] = "1. Examino o cadaver\n";
	static char l2[256] = "2. Olho a insignia\n";
	static char l3[256] = "3. Examino o bilhete.\n";
	static char l4[256] = "4. Investigo a pagina rasgada.\n";
	static char l5[256] = "5. Confiro a corda\n";
	static char l6[256] = "6. Saio do quarto\n";
	
	if (os == 0) 
	p("%s", l1);
	else if (os == 1) 
	p("%s%s%s%s%s", l1, l2, l3, l4, l5);	
	else if (os == 2)
	p("%s%s%s%s%s%s", l1, l2, l3, l4, l5, l6);
	
	scanf("%d", &dec);
	limpa
	
	if (dec == 1){
		copia(l1, "");
		os ++;
		p("\tRodeando o cadaver est�o uma insignia, outro bilhete, e uma pagina rasgada. Minha vis�o\n"
		  "\ttamb�m � atra�da para uma corda, que se encontra no armario aberto ao final da su�te. As\n"
		  "\tjanelas, como na maioria das su�tes que conferi, est�o trancadas por tabuas de madeira\n");
		  }
		else if (dec == 2){
			copia(l2, "");
		p("\tUma insignia que parece pertencer ao Xerife de alguma cidade ou\n\tcondado. Seria esse cadaver uma ex policial?\n");
			}
		else if (dec == 3){
		copia(l3, "");
		p("\tMesma caligrafia dos bilhetes anteriores. Dessa vez a mensagem �: A CHAVE PARA FORA\n\t"
			"EST� NO 3 ANDAR. CUIDADO COM ELE. MESMO QUE ELE N�O EXISTA.\n");
			stop
			limpa
			p("\tEnt�o... tenho que ir no 3 andar para sair daqui... mas, quem � ele? e\n" 
			"\to que � tudo isso sobre n�o existir? Bem, n�o importa,");
			if (gunbible == 1) 
			p(" a pistola resolver�.\n");
			else
			p(" acredito que esse livro resolver�.\n");
	}
		else if (dec == 4){
		copia(l4, "");
			p("\tParece ser um peda�o de um diario pertencente a algu�m chamado Susan Beth.\n");
		susan();
			p("\tMillers matou ela. Agora � certeza, tem algo nesse hotel. Ou tinha? Isso foi d�cadas\n\t"
			  "atr�s... N�o consigo lembrar de nada. Me confundo. Eu...\n");
			}
		else if (dec == 5){
		copia(l5, "");
		os ++;
		p("\tConfiro a corda. � bastante boa para escaladas caseiras. Eu poderia usar naquele buraco.\n");
		corda++;
		}
	if (dec == 6 && os != 0){
		copia(l6, "");
		p("Volto para o corredor. Eu...");
		g_q33++;
	}
}
void andar1() { // Fun��o - Andar 01
	
	static int dec;
	static char u2[256] = "2. Examino o quarto 30.\n";
	static char u3[256] = "3. Examino o quarto 34.\n";
	static char u4[256] = "4. Examino o quarto 38.\n";
	static char u5[256] = "5. Olho a su�te especial.\n";
	static char u6[256] = "6. Olho o quarto playground.\n";
	static char u7[256] = "7. Confiro o quarto 33.\n";
	static char u8[256] = "8. Confiro o buraco no final do corredor.\n";
		
	p("%s%s%s%s%s%s%s", u2, u3, u4, u5, u6, u7, u8);

	scanf("%d", &dec);
	limpa
		if(dec == 2) {
			copia(u2, "");
			if (visao != 0) 
				p("\tN�o tem nada aqui. Eu...");
			else
				p("\tV�rias vozes infantis cantam uma cantiga de roda por tr�s da porta."); 
				}
		else if (dec == 3) {
			copia(u3, "");
			if (visao != 0)
			p("\tUm r�dio repete a palavra norte (?) incessantemente.");
			else
			p("\tUm r�dio repete a palavra morte incessantemente.\n\tAfasto a cabe�a rapidamente, quero manter minha sanidade.");
		}
		else if (dec == 4) {
			copia(u4, "");
			if (visao != 0) 
			p("\tO reflexo do meu olho me encara pelo olho magico.");
			else
			p("\tUm... olho me encara pelo olho m�gico. Dou um pulo para tr�s...");
			}		
		else if (dec == 5) {
			copia(u5, "");
			p("\tEst� aberto. Entro, o que ser� que me espera l�?\n");
		p("\tUma su�te enorme engole meu corpo. Moveis de luxo est�o espalhados por toda a extens�o do\n"
		"\tquarto. Observo sua extens�o, vejo janelas, um bilhete, e... mais um daqueles recortes de jornal espalhados\n"
		"\tpela su�te\n");
		stop
		limpa
			while (g_qes < 1) {
				quartoespecial();
				stop
				limpa
				}
				}
		else if (dec == 6) {
			copia(u6, "");
			p("\tEntro no quarto das crian�as. Varios brinquedos est�o espalhados pelo ch�o.\n\tAlguns tem a cabe�a arrancada\n");
			stop
			limpa
			while (g_qdc < 1) {
				quartodascriancas();
				stop
				limpa
				}
				}	
		else if (dec == 7) {
			copia(u7, "");
			p("\t� uma su�te comum. Ligo minha lanterna e aponto para a cama.\n");
			stop
			limpa
			p("\tUm... cadaver?\n");
			for (i = 0; i < 10 ; i ++) {
				redy
				Sleep(200);
				ligon
				Sleep(200);
			}
			ligon
			p("\tParece estar decomposto h� muito tempo. Os longos cabelos loiros se preservaram\n"
			  "\tmas os vermes j� devoraram qualquer resquicio de carne. Eu...\n");
			  stop
			  limpa
			  	while (g_q33 < 1) {
			  		quarto33();
			  		stop
			  		limpa
					}
					}
		else if (dec == 8 && corda == 0) {
		p("\tO buraco � enorme... se eu tivesse algo para escalar. Do contrario\n"
		"\ta queda seria uma morte dolorosa\n");
		}
		else if (dec == 8 && corda != 0) {
			copia(u8, "");
			p("\tEncaixo a corda em um ponto de apoio e des�o. Na metade da descida, caio.\n");
			stop
			limpa
			p("\tA lanterna se apaga por um momento\n");
			ligoff
			Sleep(1500);
			p("\tRapidamente a luz volta.\n");
			ligon
			stop
			limpa
			p("\tPelo que entendi, ca� uns 5 metros. Devo estar agora no subsolo.\n\tTive sorte de n�o ter quebrado nenhum osso\n");
			queda++;
			}
		}
void cozinha() { // Fun��o - Cozinha
	processo 
	if (lanternadefeito) // Quebrar -> Variavel global -> g_czn
    Sleep(80);
    static char I[256] = "1. Investigo-a.\n	";
    static char II[256] = "2. Confiro o peda�o de jornal.\n";
    static char III[256] = "3. Confiro o papel.\n";
    static char IV[256] = "4. Saio da cozinha.\n";
    static int life = 0;
	static int pss = 2;
	static int dec;
	
	if (life == 0) 
		p("%s", I);
	else
		p("%s%s%s%s", I, II, III, IV);
	scanf("%d", &dec);
	limpa
		
		if (dec == 1){
			copia(I, "");
			p("Acho mais um daqueles peda�os de jornal e, pr�ximo a ele,\n"
			  "um papel rasgado.\n");
			life ++;
		}
		else if (dec == 2 && life != 0){
			copia(II, "");
			p("Esse jornal data de 04 de mar�o de 1987\n");
			je4();
			p("Millers estava desesperado para vender o hotel...\n\n"
			"O que aconteceu para ele ficar assim?\n");
			pss--;
		}
		else if (dec == 3 && life != 0){
			copia(III, "");
			p("Mais um daqueles di�rios de Millers.\n\n");
			mmillers03();
			p("\nEssa parece ter sido escrito antes do ultimo que encontrei.\n"
  			  "Millers estava atr�s de dinheiro. Para o que? E o que ele fez\n"
			  "para consegui-lo? Sinto como se j� soubesse a resposta para\n"
			  "todas essas perguntas... Mas n�o lembro.\n");
			pss--;
		}
		else if (dec == 4 && pss == 0){
			copia(IV, "");
				p("Volto ao corredor oval, com mais perguntas\n"
				   "do que respostas na mente");
			g_czn++;
			
		}
		else {
		limpa
		msgerro
		p("Que ideia estupida...");
		ligon
		}
	
}
void almoxarifado() { // Fun��o - Almoxarifado
	blue 
	stop
	if (toy == 1) {
		p("\nEla aponta para mim e imita uma palavra\nLeio seus l�bios, diz \"boneca\"");
		stop
		limpa
		p("1. Entrego a boneca\n");
		stop
		limpa
				p("Lembro da sala das crian�as, retiro a boneca\n"
				"e a entrego. Ou�o uma voz em minha cabe�a.\n");
				stop
				limpa
					p("Obrigado.\n");
					Sleep(1200);
					p("Meu nome � Peach.\n");
					Sleep(1200);
					p("Voc� me libertou.\n\n");
					Sleep(1200);
					p("Ache os papeis.\n");
					Sleep(1200);
					p("Ent�o a verdade ser� revelada.\n\n");
					Sleep(1200);	
					p( "Cuidado com ele.\n");
					stop
					limpa
				p("Ent�o foi isso que ocorreu\n"
				"com Peach... Seguirei seus conselhos.\n"
				"Espero que agora ela esteja em paz\n");
				stop
				limpa
				p("Uma chave e um peda�o de papel aparecem\n"
				"onde ela estava momentos atr�s. Pego os dois\n"
				"itens\n");
			stop
			limpa
			p("1.Confiro o bilhete\n");
			stop
			limpa
						p("Uma unica frase est� marcada, em uma caligrafia\n"
						"infantil, por�m bonita\n\n"
						"\"Eu te perd�o.\"\n\n");
						stop
						limpa
						bilhetepeach ++;
	}

	else if (gunbible == 2 && toy == 0) {
		p("1. Decido recitar a biblia.\n");
			stop
			limpa
				p("O efeito � imediato... ela some, mas sua\n"
				"cara � de... insatisfa��o. Parece que ela esperava\n"
				"algo a mais.\n");
				stop
				limpa
				p("Uma chave aparece onde ela se encontrava.\n"
				"Pego-a\n");
				stop
				limpa

	}
	
	else if (gunbible == 1 && toy == 0) {
		
		p("Ap�s algum tempo ela some.\n");
		stop
		limpa
		p("A pistola fica quente.\n");
		stop
		limpa
		p("1. Examino a pistola\n");
		stop
		limpa
		p("Uma mensagem est� marcada nela:\n \"Foi indolor\"\n");
		stop
		limpa
		p("Uma chave aparece onde ela se encontrava.\nPego-a.");
		stop
		limpa
		p("2. Saio\n");
		stop
		limpa
		
	}
stop
p("N�o h� mais nada de interesse aqui. Saio,\n"
	 "deixando as vassouras e objetos de limpeza\n"
	"para tr�s.");
stop
limpa
ligon
Sleep(800);
p("Minha lanterna volta ao normal. Piscando.");
Sleep(500);	
chavezelador++;	
}
void quartozelador() { // Fun��o - Quarto Zelador
	processo
	if (lanternadefeito)
	Sleep(80);
	
	p("1. Investigo o di�rio\n");
	stop
	limpa
	zimmerman();
	p("\n\n Ent�o aquela garota... foi ele que...\n"
	  "Ele era cumplice de Millers? O zelador...");
	stop
	limpa
	if (bilhetepeach < 1) {
		p("Antes que possa indagar, ele some\n"
		"Um p� de cabra aparece onde ele estava.");
	}  
	else {
		p("1. Entrego o bilhete");
		stop
		limpa
        p("Entrego o bilhete. Um sorriso brota\n"
	      "de seu rosto murchado. Uma chave aparece na escrivaninha.\n"
	       "Ele some e um p� de cabra aparece onde ele estava\n");
		chavequarto0++;
				  	}
	stop
	limpa		  	
	p("2. Volto ao sal�o oval");
	goat++;
}
void subsolo () { // Fun��o - Subsolo
	processo
	if (lanternadefeito) 
    Sleep(80); 
    static char Ikalel[256] = "1. Examino a cozinha.\n";
    static char IIdaniel[256] = "2. Entro no almoxarifado.\n";
    static char IIIritalindo[256] = "3. Investigo o quarto sem n�mero.\n";
	static char IVdavinaocriouumthread[256] = "4. Olho a porta no corredor principal.\n";
	static int dec;
	
	p("%s%s%s%s", Ikalel, IIdaniel, IIIritalindo, IVdavinaocriouumthread );
	scanf("%i", &dec);
	limpa
	if (dec == 1) {
		copia(Ikalel, "");
			p("A cozinha est�... Impecavelmente limpa.");
			stop
			limpa
				while ( g_czn < 1) {
			cozinha();
			stop
			limpa}	
					}	
	else if (dec == 2) {
		copia(IIdaniel, "");
		ii++;
		Sleep(1000);
		p("Minha lanterna apaga");
		blue
		Sleep(600);
		limpa
		p("Ela acende ap�s um momento, soltando uma\n" 
		"luz azul escura. Iluminando uma garota\n"
		"pequena. No m�ximo 8 anos. Ela � translucida\n"
		"consigo ver a parede atr�s dela. Por algum motivo\n"
		"n�o sinto medo...");
		stop
		limpa
		almoxarifado();	
		stop
		limpa
		ii--;}		

	else if (dec == 3) {
		copia(IIIritalindo, "");
			if (chavezelador < 1) {
			
			limpa 
			p("\nA porta est� trancada\n"); }
			else
			p("Uso a chave rec�m adquirida, a porta desliza.\n"
			"Uma habita��o simples... se n�o fosse pelo\n"
			"velho me encarando. Ele n�o fala nada, s� me\n"
			"encara. N�o sinto nenhum perigo emanando dele\n"
			"assim como n�o senti com a garotinha. Um diario\n"
			"Repousa ao seu lado\n");
			stop
			limpa
					quartozelador();
					stop
					limpa
						}
	
	else if (dec == 4) {
		if ( goat == 0) 
			p("Est� trancada. Vai ser necess�rio algo para\nfor�ar a abertura.");
		else {
		p("Uso o p� de cabra rec�m adquirido para\n"
		"for�ar uma abertura. Ap�s algum esfor�o\n"
		"Ela abre, me mostrando o sal�o principal.\n\nAvan�o."); 
		g_sbl++;
		ii++;}
	}
	}
void recepcao() { // Fun��o - Receop��o
	static int dec;
	static char q1[240] = "1. Leio o recorte\n";
	static char q2[240] = "2. Pego a chave\n";
	static char objt = 0;
	
		p("%s%s", q1, q2);
		scanf("%d", &dec);
			limpa
			if (dec == 1) {
				copia(q1, "");
			p("Pego o recorte de jornal e o leio.\n"
			"Data de 28 de outubro de 1987\n\n");
			 je5();
			p("Esse hotel era uma central de tr�fico humano?\n"
			"isso explica o n�mero de... anormalidades que h�\n"
			"aqui... Millers, onde ele foi parar?\n");
			objt++;
			}
			
			else if (dec == 2) {
				copia(q2, "");
			p("Pego a chave do elevador.\n"
			  "Ao seu lado, vejo a chave do Hall de Entrada.\n"
			  "Eu poderia ir embora agora... mas n�o\n"
			  "posso. H� algo que tenho que fazer\n");
			objt ++;
			chaveelevador++;
			}
			
			else {
		limpa
		msgerro
		p("Que ideia estupida...");
		stop
		ligoff		
		}
			if (objt > 1) 
			 g_rcp++;
}
void quarto0 () { // Fun��o - Quarto 0
					  p("Testo a chave que peguei daquele\n"
						"idoso. Ela encaixa e gira.\n"
						"Esse deve ser o quarto de Millers.\n\n"
						"Est� tudo muito escuro, mas uma brecha\n"
						"de luz nas janelas trancadas ilumina uma\n"
						"foto.\n\n");
						p("Nela, Millers -- o mesmo homem que\n"
						"cortou a faixa de inaugura��o do hotel\n"
						"--aparece abra�ado com uma mulher e uma crian�a\n"	
						"no hospital. Um cartaz de \"Livre da Leucemia\"\n"
						"est� pendurado ao lado deles. Ao lado, h� um\n"
						"peda�o de papel rasgado. Mais um di�rio, presumo\n\n");
							stop
							limpa
						p("1.Checo o diario\n");
						stop
						limpa
						mmillers01();
						p("Ent�o era para isso que ele queria tanto dinheiro.\n"
							"Ser� que justifica? N�o, provavelmente n�o.\n\n"
							"Volto at� o Hall de Entrada.");
							discernimento++;
}
void hall() { // Fun��o - Hall de Entrada
	static int ol = 0;
	static int err;
	static char t1[256] = "1. Confiro recep��o\n";
	static char t2[256] = "2. Checo o quarto 0\n";
	static char t3[256] = "3. Examino o elevador\n";
	
		p("%s%s%s", t1, t2, t3);
		scanf("%d", &err);
		limpa
		if (err == 1) {
			copia(t1, "");
		p("Computadores antigos descansam cobertos\n"
		"De poeira. Entre os v�rios documentos\n"
		"espalhados, acho mais um recorte de jornal e,\n"
		"ao seu lado, uma chave. A chave do elevador.\n");
		
		stop
		limpa
		while (g_rcp < 1) {
			recepcao();
			stop
			limpa
		}
			p("Com a chave em m�os, retorno ao centro do hall.\n");
			stop
		}	
		else if (err == 2) {
			copia(t2, "");
				if (chavequarto0 == 0) 
					p("Est� trancado.");
				else
				quarto0();
				 }
		else if (err == 3 ) {
			copia(t3, "3. Examino o elevador novamente\n");
				
				if (chaveelevador == 0 && ol > 0) 
					p("Trancado.");
				
				else if (chaveelevador == 0) {
					p("Est� trancado... Que tipo de elevador precisa de chave?");
				ol++;
				}
				else if (chaveelevador > 0) {
					p("Abro-o. Entro nele, e aperto o 3� bot�o.\n"
					"A campainha toca, e subo, em dire��o �\n"
					"conclus�o\n");
					fnly++;
				}
		}
}
void andar3() { // Fun��o - Andar 3
	char nome[200];
	int a;
	int bbb;
	int iii;
	p("As portas do elevador abrem. O andar est�\n"
	"em perfeito estado, e com uma surpresa a mais:\n"
	"Ele est�");
	Sleep(1800);
	grey
	Sleep(1100);
	p(" iluminado."); 
	stop
	limpa
	p("A luz metalica do luar se infiltra\n"
	"pelas janelas, provendo uma ilumina��o mais\n"
	"do que bem vinda para todo esse terror.\n");
	stop
	limpa
	p("Acho que...\n");
	Sleep(1800);
	p("estou...\n");
	 Sleep(1800);
	p("lembrando!\n");
	stop
	limpa
	p("Sim... lembro do meu nome.\n"
	"Meu nome �: ");
	fgets(nome, 250, stdin);
	p("%s  ... \n", nome);
	p("Como pude me esquecer?\n");
	stop
	limpa
	p("Sinto que estou pr�ximo de deixar esse\n"
	"lugar para tr�s. Avan�o e vasculho ao redor.\n"
	"Os quartos est�o todos trancados. Mas um em\n"
	"especial me chama a aten��o.\n");
	stop
	limpa
	p("O quarto 61 tem uma fechadura brilhante.\n"
	"Da mesma cor da chave que achei ao\n"
	"despertar.");
	stop
	limpa
	p("1.Encaixo a chave na fechadura.\n");
	stop
	limpa
	p("Ele desliza, abrindo e revelando o quarto.\n"
	"Em seu centro, senta... Millers.\n"
	"Mas ele n�o est� morto.\n"
	"Ele est� vivo. E me encara.\n");
	stop
	limpa
	ligoff
	p("Ent�o voc� voltou... Achei\n");
	p("que voc� j� tivesse ido embora\n");
	stop
	limpa
	grey
	p("Do que voc� est� falando?\n");
	p("Voc� � um monstro! a policia\n");
	p("ainda est� te procurando...\n" );
	stop
	limpa
	ligoff
	p("Se acalme %s. \nVoc� n�o era assim.\n", nome);
	p("Vejo que a idade te fez bem.\n");
	stop
	grey
	limpa
	p("Ele sabe meu nome?\n");
	p("Como?\n");
	grey
	limpa
	p("Me lembrei.\n");
	Sleep(800);
	p("Vejo que voc� ainda est� vivo, pai.\n");
	Sleep(1200);
	limpa
	ligoff
	Sleep(1200);
	p("Se voc� puder chamar esse estado de vivo.\n");
	Sleep(1200);
	p("Como est� sua m�e?\n");
	grey
	limpa
	p("Morta. Foi por isso que vim te procurar.\n");
	Sleep(1200);
	p("Para lhe avisar e para finalmente conhece-lo\n");
	Sleep(1200);
	ligoff
	limpa
	p("Morta? Entendo...\n");
	Sleep(1200);
	p("Tudo que fiz foi por voc�\n");
	Sleep(1200);
	p("e por ela, voc� sabe, certo?\n");
	Sleep(1200);
	grey
	limpa
	p("Como eu fui parar naquela cama?\n");
	Sleep(1200);
	p("Por que eu n�o lembro de nada?\n");
	Sleep(1200);
	limpa
	ligoff
	p("Entendo... O efeito colateral do cancer.\n");
	Sleep(1200);
	limpa
	grey
	limpa
	p("Me lembro de novo.\n");
	Sleep(1200);
	p("O efeito colateral.\n");
	Sleep(1200);
	p("As vezes vejo coisas que n�o existem.\n");
	Sleep(1200);
	p("E tenho perda de memoria.\n");
	Sleep(1200);
	p("Entendo.");
	Sleep(1200);
	ligoff
	limpa
	p("Bem, foi bom te ver.\n");
	Sleep(1200);
	p("Voc� j� tem que ir\n");
	Sleep(1200);
	p("Sabe que n�o pode ficar muito tempo\n");
	Sleep(1200);
	p("Sem o seu remedio.\n");	
	Sleep(1200);
	grey
	limpa
	p("Nem uma lagrima pela m�e?\n");
	Sleep(1200);
	ligoff
	limpa
	p("J� chorei todas quando abandonei voc�s dois.\n");
	Sleep(1200);
	grey
	limpa
	p("Voc� � um assassino.\n");
	Sleep(1200);
	p("Tudo que voc� fez...\n");
	Sleep(1200);
	p("Todas aquelas pessoas...\n");
	Sleep(1200);
	ligoff
	limpa
	p("Me culpe por isso.\n");
	Sleep(1200);
	p("Me culpe por voc� n�o ter morrido\n");
	Sleep(1200);
	p("N�o me arrependo\n");
	grey
	limpa
	p("Peach...");
	Sleep(1200);
	ligoff
	limpa
	p("Nat�lia Peach?\n");
	Sleep(1200);
	p("Ela est� viva.\n");
	Sleep(1200);
	p("Encontraram ela morando\n");
	Sleep(1200);
	p("com o pai, o qual a m�e\n");
	Sleep(1200);
	p("tinha se divorciado, em outro pa�s.\n");
	Sleep(1200);
	grey
	limpa
	p("Ent�o... os fantasmas que vi?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Tome seu rem�dio\n");
	Sleep(1200);
	grey
	limpa
	p("E as mensagens que vi?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Voc� n�o tomou?\n");
	Sleep(1200);
	p("Deixei algumas pilulas em um frasco de vidro.\n");
	Sleep(1200);
	grey
	limpa
	p("E todas as outras pessoas?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Fiz o que tinha que fazer\n");
	Sleep(1200);
	p("para manter voc� vivo.\n");
	Sleep(1200);
	p("Me culpe o quanto quiser\n");
	Sleep(1200);
	p("mas n�o me arrependo\n");
	Sleep(1200);
	grey
	limpa
	p("...");
	Sleep(1200);
	ligoff
	limpa
	p("Presumo que voc� j� vai\n");
	Sleep(1200);
	grey
	limpa
	p("Sim, quanto tempo passei aqui?\n");
	Sleep(1200);
	ligoff
	limpa
	p("2 dias. Mas voc� s� veio aqui agora.\n");
	Sleep(1200);
	p("Deixei a chave em seu quarto caso voc�\n");
	Sleep(1200);
	p("finalmente resolvesse vir aqui.\n");
	Sleep(1200);
	p("Voc� ainda continua com aquele estranho habito de\nEscrever bilhetes com sua caneta vermelha?\n");
	p("Sua m�e dizia que te ajudava a manter o foco e a mente no agora.\n");
	Sleep(1200);
	grey
	limpa
	p("Ent�o os bilhetes eram meus.\n");
	Sleep(1200);
	p("No meu quarto?\n");
	Sleep(1200);
	ligoff
	limpa
	p("No quarto 42. Mas n�o imagino\n");
	Sleep(1200);
	p("por que voc� escolheu esse.\n");
	Sleep(1200);
	p("Afinal, nenhuma porta\n,");
	Sleep(1200);
	p("que n�o essa, estava trancada.\n");
	Sleep(1200);
	grey
	limpa
	p("Efeitos colaterais...\n");
	Sleep(1200);
	Sleep(800);
	limpa
	ligon
	p("1. Vou embora.\n");
	stop }
	
	

			
int main()  { // Fun��o Principal.
	 portugues 
	introducao();
while (g_q42 < 1) {
	quarto42();
	limpa
}	
corredorint();
while (corr < 1) {
limpa
corredor();
}
andar1int();
while (queda < 1) {
andar1();
stop
limpa
}  
subsoloint();

while ( g_sbl == 0) {
	subsolo();
	stop
	limpa
}
hallint();
while(fnly < 1) {
	hall();
	stop
	limpa
}
andar3();
return 0;	
}
