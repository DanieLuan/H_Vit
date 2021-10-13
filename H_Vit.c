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
#define redy system("color 4E"); // Defines, simplificar código.

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
int i, decision; // Váriaveis estáticas globais, a maioria para quebrar loop.

// Funções de Documentos.
void je1 () { // Jornal 01.
p("	\n\n	5 de Janeiro de 1984 -\n\n" 
	
			"\tABRE O HOTEL VITORIA\n\n"

			"\tÉ INAUGURADO HOJE O MAGNIFICO HOTEL VITORIA, DEPOIS DE 4 ANOS DA REFORMA DE UMA MANSÃO DOS TEMPOS\n"
			"\tVITORIANOS. UMA FILA ENORME DE TURISTAS COM INTERESSE EM VEREM A REFORMA SE FORMOU NO DIA DA SUA\n"
			"\tINAUGURAÇÃO. O GERENTE DIZ QUE ABRIRÁ VAGAS PARA HOSPEDAGEM A PARTIR DA SEMANA QUE VEM, QUERENDO\n"
			"\tNESSA SEMANA SOMENTE MOSTRAR COMO O HOTEL É PARA OS HABITANTES. POR SER A BEIRA MAR, E PROXIMA DA\n"
			"\tCAPITAL, ELE CRÊ QUE O FLUXO DE CLIENTES SERÁ GRANDE. E PROVAVELMENTE SERÁ, AFINAL, É O UNICO HOTEL DE\n"
			"\tTODO O PAÍS QUE FOI FEITO A PARTIR DE UMA MANSÃO VITORIANA. ALÉM DISSO ELE É LOCALIZADO A BEIRA MAR,\n"
			"\tDEIXANDO OS SEUS HOSPEDES APRECIAREM UMA PAISAGEM EXUBERANTE DO MAR DO NORTE. HÁ ATÉ UM QUARTO SOMENTE\n"
			"\tPARA CRIANÇAS SE DIVERTEREM, E TAMBÉM UM QUARTO ESPECIAL, COM ESPAÇO EXTRA E MAIS CONFORTO.\n"

			"\tFICANDO A APENAS 60 MILHAS DE NEWCASTLE, VITORIA CONTA COM TRÊS ANDARES SUPERIORES QUE ABRIGAM EXATAMENTE\n"
			"\tSESSENTA QUARTOS, UM SALÃO PRINCIPAL NO TERREO, COM QUARTOS DE FUNCIONARIOS E DO GERENTE E UM SUBSOLO, PARA\n"
			"\tPROPOSITOS MAIS TECNICOS.\n\n\n"
	
			"\tO QUE ANTES ERA UMA GRANDE RUÍNA É HOJE UMA INCRIVEL ATRAÇÃO TURISTICA QUE COM CERTEZA IMPULSIONARÁ A\n"
			"\tECONOMIA DA PEQUENA CIDADE DE NOTHA.\n\n"); }
void je2 () { // Jornal 02
	p("\n\tVELHA GUARDA DE NOTHA CONTRA O HOTEL VITORIA\n\n"
		"\tCOM O CONSTANTE FLUXO DE TURISTAS E HABITANTES DE NEWCASTLE VINDO PARA O HOTEL VITORIA SE HOSPEDAREM, OS\n"
		"\tARREDORES DE NOTHA MELHORARAM BASTANTE ECONOMICAMENTE. AS PESSOAS PASSAM PELOS COMERCIOS DA CIDADE E COMPRAM\n" 
		"\tCOISAS, ALÉM DE REALIZAREM BASTANTE PASSEIOS DE BARCO PELO MAR. OS HABITATENS MAIS JOVENS DE NOTHA, NA FAIXA\n" 
		"\tÉTARIA DE 10 - 22 ANOS NÃO TEM NADA A RECLAMAR. ELES DIZEM QUE O HOTEL FEZ MARAVILHAS PELA CIDADE. ENTRETANTO,\n" 
		"\tOS HABITANTES MAIS VELHOS PENSAM OUTRA COISA: ELES NÃO DEVIAM TER CONSTRUIDO O HOTEL BEM NAQUELA ÁREA, TODOS\n" 
		"\tSABEM O QUE TEM ALI... NÃO É COISA BOA. QUALQUER COISA CONSTRUÍDA ALI EM CIMA ESTÁ FADADA A SER.\n"
		"\tCONTAMINADA AO MAL. QUANDO QUESTIONADO POR QUAL MOTIVO, O Sr. ARTHUR CONNOR PREFERIU FICAR CALADO,\n"
		"\tSOMENTE RESPONDENDO LÁ,É MALÍGNO, PERGUNTE A QUALQUER UM COM IDADE O SUFICIENTE.\n\n"
		"\tO HOTEL VITORIA DIZ QUE ESTÁ TUDO BEM E QUE NÃO HÁ MOTIVO PARA PREOCUPAÇÃO, E OS HABITANTES MAIS \n"
		"\tNOVOS FALAM QUE TUDO NÃO PASSA DE SURPESTIÇÃO.\n\n");
}
void je3() { // Jornal 03
		p("\tDESAPARECIMENTOS EM NOTHA INTRIGAM A COMUNIDADE\n\n"
		"\tVÁRIOS DESAPARECIMENTOS TEM OCORRIDO NA PEQUENA DE \n\tCIDADE NOTHA, CONHECIDA SOMENTE POR SUAS PRAIAS E\n"
		"\tPELA ATRAÇÃO TURISTICA QUE É O HOTEL VITORIA. A PRIMEIRA\n\tDESAPARECIDA FOI UMA GAROTA DE 08 ANOS CHAMADA\n"
		"\tNATÁLIA PEACH, UMA JOVEM TURISTA VINDA DA AMÉRICA DO SUL PARA\n\tVISITAR A FAMILIA. SEU DESAPARECIMENTO FOI\n"
		"\tREGISTRADO EM OUTUBRO DE 1984, MAS NENHUM RASTRO DA GAROTA\n\tFOI ACHADO. AO ENTREVISTAR OS HABITANTES DA REGIÃO\n"
		"\tELES SE RECUSAM A FALAR SOBRE O CASO, CONTUDO UM VELHO SENHOR\n\tFALA QUE \"É TUDO CULPA DAQUELE MALDITO HOTEL\", QUANDO");
		p("\n\tPRESSIONADO ELE SE RECUSOU A DAR MAIS DETALHES. A PEQUENA\n\tNATALIA ESTAVA SEMPRE COM SUA BONECA EM MÃOS, ESTA QUE" 
		"\n\tTAMBÉM SUMIU. PEACH NÃO FOI A ÚNICA A DESAPARECER,\n\tMAIS DE 30 CASOS JÁ FORAM REGISTRADOS E O QUE ERA ANTES\n"
		"\tUMA SIMPLES CIDADE PACATA, PARAÍSO DE TURISTAS, AGORA VIROU\n\tA ATENÇÃO DE TEORICOS DE CONSPIRAÇÃO E POLICIAIS.\n"
		"\tNINGUÉM SABE ONDE AS VITIMAS FORAM PARAR, PODERIA UM\n\tSERIAL KILLER ESTÁ RONDANDO A REGIÃO? TAL HIPOTESE É\n\n"
		"\tO papel está rasgado e não é possivel ler o resto\n\n");
}
void je4() { // Jornal 04
		p("\t\nHOTEL VITORIA ESTÁ A VENDA\n\n"
		  "GERENTE DO HOTEL, M. MILLERS, ANUNCIA PARA A VENDA O GRANDIOSO\n"
		  "HOTEL VITORIA. SEGUNDO ELE, QUEM ADQUIRIR TAL EMPREENDIMENTO,\n"
		  "ESTÁ FEITO NA VIDA. QUANDO QUESTIONADO PELO MOTIVO DA VENDA, ELE\n"
		  "FALA QUE JÁ CONSEGUIU  TUDO QUE ERA POSSIVEL PARA ELE COM O HOTEL\n"
		  "E QUE ESTÁ A BUSCA DE NOVOS DESAFIOS. ESTRANHAMENTE, O HOTEL ESTÁ\n"
		  "A VENDA POR UM PREÇO BASTANTEBARATO, APENAS [inteligivel] DE EUROS.\n"
		  "QUANDO QUESTIONADO SOBRE A RAZÃO PELA QUAL ELE COLOCOU O HOTEL A \n"
		  "VENDA POR UM PREÇO TÃO MODESTO, MILLERS RI E RESPONDE QUE NÃO SE\n"
		  "IMPORTA COM DINHEIRO.\n\n");
}
void je5() { // Jornal 05
		p("\tM. MILLERS NA MIRA DA POLICIA.\n\n"
		"O GERENTE DO HOTEL M.MILLERS ESTÁ SENDO\n"
		"PROCURADO PELA POLICIA. A ACUSAÇÃO QUE ELE\n"
		"ENFRENTE É SOBRE TRÁFICO HUMANO. UTILIZANDO\n"
		"DO HOTEL COMO FAIXADA PARA SEQUESTRAR PESSOAS\n"
		"E AS VENDEREM PARA CULTOS. MILLERS ESTÁ FORAGIDO,\n"
		"MAS A POLICIA SUSPEITA DE QUE SEU NOME VERDADEIRO\n"
		"NÃO SEJA ESSE. MAIS DE 40 PESSOAS SUMIRAM NA\n" 
		"REGIÃO DE NOTHA, A POLICIA SUSPEITA DE QUE\n"
		"A MAIORIA DESSES SUMISSOS ESTEJA, DE ALGUMA\n"
		"RELACIONADA COM O HOTEL VITORIA. ENTRE ESSES\n"
		"DESAPARECIMENTOS, ESTÁ UMA GAROTA DE 08 ANOS\n"
		"CHAMADA NA[inteligivel] E O HOTEL SERÁ FECHADO\n"
		"ATÉ SEGUNDA ORDEM.\n\n");
}
void jashes() { // Carta de J. Ashes
			p("	\n\tQUERIDA, PRECISAMOS PENSAR BASTANTE SOBRE NÓS DOIS ANTES DE TOMARMOS UMA DECISÃO SOBRE ISSO.\n"
		"\tVOCÊ PEDIU UM TEMPO SOZINHA PARA PENSAR SE REALMENTE QUER O DIVORCIO, ENTÃO EU VIM ME HOSPEDAR\n"
		"\tNO HOTEL VITORIA, PARA DAR TAL TEMPO À VOCÊ. O HOTEL É MAGNIFÍCO, E OS SEUS FUNCIONARIOS SÃO TODOS\n"
		"\tBEM TREINADOS. EMBORA SÓ TIVESSE DINHEIRO PARA FICAR UMA SEMANA, O GERENTE FOI GENTIL O SUFICIENTE\n"
		"\tPARA DEIXAR-ME FICAR MAIS TEMPO. ELE DISSESSE QUE QUERIA UM FAVOR DA MINHA PARTE. NÃO SEI\n"
		"\tEXATAMENTE O QUE É AINDA E... CÁ ENTRE NÓS... ESSE TAL DE MALCOLM MILLERS ME É UM TANTO QUANTO\n "
		"\tESTRANHO... É COMO SE ELE SEMPRE ESTIVESSE OBSERVANDO OS HOSPEDES DE SOLAIO. ENFIM, CREIO QUE VOCÊ\n"
		"\tTOMARÁ A DECISÃO CERTA. SAIBA QUE EU AINDA TE AMO APESAR DE TODOS OS NOSSOS PROBLEMAS. POR FAVOR,\n "
		"\tPENSE BEM.\n\n"

		"\tJ. ASHES \n\n");
	}
void mmillers01 () { //Diário de M. Millers - Entrada 01
		p("QUANDO ME CASEI, JUREI SAIR DESSE MUNDO.\n"
		"NUNCA PENSEI QUE VOLTARIA PARA ELE. MENOS\n"
		"AINDA PENSEI QUE A CAUSA SERIA JUSTAMENTE\n"
		"A MINHA FAMÍLIA. LEUCEMIA INFANTIL. OS DOUTORES\n"
		"DIZEM QUE NÃO HÁ ESPERANÇAS. MAS... DINHEIRO\n"
		"COMPRA TUDO. TALVEZ ATÉ UMA VIDA. VOLTAREI A\n"
		"[inteligivel]... SE EU FOR PEGO, QUE SEJA\n"
		"APÓS [inteligivel] TER RECUPERADO SUA SAÚDE.\n"
		"CREIO QUE ELA SABERÁ O QUE FAZER, APÓS ISSO\n"
		"DEIXAREI TODO O DINHEIRO EM UMA CONTA LIVRE\n"
		"FORA DO ALCANCE DAS AUTORIDADES.\n"
		"QUE DEUS ME PERDOE... QUE ELE ENTENDA\n\n");
}
void mmillers02() { // Diário de M. Millers - Entrada 02
	p(	"\n\n[...] UM ACORDO COM ELES. APESAR DE SUAS CRENÇAS, ELES PARECEM\nSER UMA ORGANIZAÇÃO SÉRIA."
		"O ACORDO FOI DE QUE\nENVIARIA 15 POR ANO. SEM MAIS NEM MENOS. MAIS GERARIA DESCONFIANÇA\n E"
		"MENOS SERIA ARRISCADO DEMAIS COM POUCO LUCRO. COM\nSORTE, NINGUÉM SUSPEITARÁ. ELES PROVIDENCIARAM"
		"VERBA O SUFICIENTE\nPARA CUIDAR DE PROBLEMAS LEGAIS. PERGUNTEI POR QUE ELES\n"
		"NÃO FAZEM ISSO ELES MESMOS. ELES\nDISSERAM QUE \"O PECADO REPOUSARÁ SOMENTE COM VOCÊ\". POR\nMIM"
		"ESTÁ BOM, SE TENHO QUE IR ATÉ O INFERNO PARA CONSEGUIR UMA CURA\n É PARA LÁ QUE IREI.\n\n");
}
void mmillers03() { // Diário de M. Millers - Entrada 03
	p("	\n\n\tOS NEGOCIOS ESTÃO INDO BEM ESSE ANO, CADA VEZ MAIS E MAIS TURISTAS VISITAM O HOTEL. TIVE ALGUNS\n" 
		"\tPROBLEMAS RELACIONADOS A PAGAMENTO, MAS DEMITI ALGUNS FUNCIONARIOS E LOGO TUDO VOLTOU AO NORMAL.\n"
		"\tO DINHEIRO TEM QUE FLUIR, ASSIM COMO AS PESSOAS. [Parte inteligivel]... DESCONFIAM\n"
		"\tDE NADA. UM DELES VEIO INVESTIGAR, MAS TENHO CERTEZA QUE ELA NÃO ACHOU NADA DE ESTRANHO. FIZ COM QUE\n "
		"\tELA NÃO ACHASSE NADA DE ESTRANHO, PARA SER MAIS ESPECIFICO. OS NEGOCIOS TEM DE CONTINUAR, NÃO IMPORTA\n"
		"\tCOMO. ATÉ EU CONSEGUIR [inteligivel] OS NEGÓCIOS CONTINUARÃO.\n\n");
}
void susan() { // Diário de Susan Beth
		p("\n\tESTOU AQUI HÁ UMA SEMANA E NÃO DESCOBRI NADA. SE REALMENTE TIVER ALGO MACABRO\n"
		"\tOCORRENDO NESSE HOTEL, ELES PARECEM MANTER ISSO EM SEGREDO DE FORMA EXTRAMENTE\n"
		"\tEFICIENTE. MAS, NÃO CREIO QUE UM LUGAR TÃO ACONCHEGANTE ASSIM POSSA TER ALGO DE\n"
		"\tILÍCITO... O GERENTE ATÉ SE OFERECEU PARA ME SERVIR O PRATO ESPECIAL. ELE DIZ QUE\n"
		"\tSERÁ A MELHOR COISA QUE PROVAREI EM VIDA.\n\n"					
		"\t\t\t\t\t\t\t-SUSAN BETH\n");
}
void zimmerman() { // Diário de Albert Zimmerman
		p("UMA CRIANÇA É DEMAIS, NÃO IMPORTA OS MOTIVOS\n"
		"DE MILLERS. ELA ERA SÓ UMA GAROTA, COM TODO\n"
		"O FUTURO PELA FRENTE... E AGORA... DEUS, É\n"
		"MELHOR QUE ELA ESTEJA MORTA... DEUS, É MELHOR\n"
		"SE EU MATA-LA. SE AQUELES BASTARDOS COLOCAREM\n"
		"A MÃO NELA... A MORTE É MELHOR QUE AQUILO,\n"
		"DISSO TENHO CERTEZA.\n\n"
		"QUE ELA POSSA ENTENDER. SERÁ INDOLOR\n\n"
		"REZEM POR ELA. E POR MIM.\n"
		"\t\t\t\tA. ZIMMERMAN\n\n");
}

//Funções Especiais
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

// Funções Simples (Introduções)
void introducao() { // Função de Introdução - Quarto 42
	p("\tAcordo em uma sala totalmente escura... não lembro como vim parar aqui. A única possível fonte\n"

	"\tde luz, a janela, está trancada com pedaços de tábua marretadas na parede. A chuva martela contra\n"
	"\ta janela, uma  tempestade parece estar ocorrendo do lado de fora. Um sentimento estranho acompanha\n"
	"\tmeu despertar.\n\n");
	p("\tApós algum tempo, minha visão se acostuma com a escuridão e sou capaz de discernir a forma\n"
	"\tde uma porta e alguns objetos ao meu redor. Espalhados pela sala, vejo uma chave, uma bolsa e\n"
	"\tuma lanterna. Eu...\n\n");
	stop
	limpa
	stop}
void corredorint() { //Função de Introdução - Corredor
	  p("\tO Corredor está totalmente escuro salvo um feixe de luz que ilumina uma pequena parcela\n"
		"\tdele. Ligo a lanterna e algo passa rapidamente sobre mim, isso foi um vulto? parecia\n"
		"\tpequeno... Talvez eu esteja imaginando coisas. A porta pela qual saí tem a numeração 47.\n\n"
		"\tAponto minha lanterna para as outras portas. Ao meu lado estão os quartos 48 e 46. Na minha frente,\n"
		"\thá um quarto com a numeração apagada... é como se os numeros tivessem sido arrancados a força da\n"
		"\tporta.\n\n"
		"\tHá varios outros quartos pelo corredor, e ao final deste há uma porta. Eu...\n"); 
	stop }
void subsoloint() { // Função de Introdução - Subsolo
	processo
	if (lanternadefeito) 
    Sleep(100);
	
	p("\tA lanterna se apaga constantemente. Creio que a queda a danificou.\n\n");
	Sleep(1200);
	p("\tEstou no meio de um salão totalmente oval. Consigo discernir um comodo cheio de pratos\n"
	"\tlimpos e panelas a minha esquerda. A cozinha. As demais portas estão trancadas e alguns corredores\n"
	"\tbloqueados por entulho. Obra do tempo ou de alguém? Nos corredores não bloqueados, acho uma porta\n"
	"\tnomeada \"Almoxarifado\" e, ao lado  dela, uma sem nome algum. Nem numeração. O corredor central me leva\n"
	"\taté uma escadaria, com uma grande porta de madeira no final\n");
	stop
	limpa
}
void hallint() { // Função de Introdução - Hall de Entrada
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
	p("Após um tempo, minha visão se acostuma\n" 
	"com a escuridão e sou capaz de ver\n"
	"o enorme hall de entrada.\n\n"
	"Entretanto, boa parte dele\n"
	"está bloqueado por entulhos.\n"
	"As únicas partes acessiveis que\n"
	"posso ver são o elevador, que se\n encontra no segundo andar, onde acordei, a\n"
	"recepção e um quarto com um 0\n"
	"dourado talhado.\n\n"
	"Uma porta de mogno enorme se extende.\nO único obstaculo entre mim e a liberdade\nmas... Há algo que tenho "
	"que fazer...\nAlgo que me chama... no 3º andar.");
	stop
	limpa
}

// Funções de Jogabilidade 
void quarto42()  { // Função - Quarto 42

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
		p("\tPego a bolsa, pode ser util para carregar objetos. Ela é uma bolsa escolar totalmente preta.\n"
			"\tDentro dela, encontro o recorte de um jornal datando de 05 de janeiro de 1984.\n");
		je1();
		printf("");
		p("\tEntão é aqui que estou... mas por quê? E por quê não consigo me lembrar de nada? As perguntas pairam no \n"
		"\tar, decido que tenho de sair daqui: Esse lugar me dá uma sensação estranha... Guardo o jornal dentro \n "
		"\tda bolsa, talvez haja mais recortes como esse por ai. Eu... \n"); 
		sair++; 
		}
	else if (dec ==2) { 
		strcpy (d, "");
		p("\tPego a lanterna e a ligo. É uma lanterna a pilha comum, prateada e com uma especie de pulseira para\n" 
		"\tfixa-la na mão. Vou mantê-la comigo, será util quando precisar de iluminação em um canto realmente\n"
		"\tescuro. \n");
		sair ++; 
		ligon}	
	else if (dec ==3) {
		strcpy (t, "");
		p("\tConfiro a chave. Ela é dourada e tem uma forma estranha, parece ser bastante antiga\n"
		"\te feita de um bom metal pois não mostra sinais de ferrugem. Guardo a chave no bolso, talvez \n"
		"\tseja util mais tarde. Após isso, ...\n");
		sair ++;
		os = 1;  } 
	else if (dec ==4) {
		strcpy (q, ""); 
		
		p("\tOlho mais um pouco ao redor, talvez eu tenha deixado de notar algo. \n \n");
		p("\tAcho um bilhete em cima de uma mesa, a caligrafia me é extremamente familiar, embora não consiga \n"
		"\tlembrar o porquê. escrito nele está NÃO SAIA DA MANSÃO, inumeras vezes... mas a tinta não é preta,\n"
		"\té vermelha, e... é estranha, como se não fosse realmente tinta. Coloco o bilhete no bolso. Após algum tempo ...\n"); }
	else if (dec ==5) {
		strcpy(c, "");
		p("\tGrito, talvez alguém me escute. \n"
		"\tMeu grito ecoa na sala, mas nada parece tê-lo ouvido. Eu... \n"); }		
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
			p("\tTento abrir a porta. Está trancada, como vou sair daqui? Volto,\n	talvez eu tenha perdido algo. Então eu ...\n");
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
			p("\tTento usar a chave na porta. Ela não encaixa. Ponho ela de volta\n"
			"\tno bolso e... \n"); }
			
	stop }
void quarto46() { // Função - Quarto 46 


int decision;
	static int sair = 0;
  	static int saindo;
	static int segredo = 0;
 	static int sairquarto46 =0;
	static char uno[256] = "1. Vou até a janela aberta.\n";
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
			p("\tVou até a janela aberta. O mar é uma infinidão azul na minha frente.\n"
			"\tPosso ver um farol apagado numa pequena peninsula. É dificil precisar as horas\n"
			"\tcom a tempestade, pode ser qualquer hora entre 3PM e 5PM. É uma vista realmente\n"
			"\tbela. Após admirar a vista, ...\n");	
			l++; 
		}		
		else if(decision == 2)  {
		strcpy(duno, "");
			p("\tCheco o quarto. Acho um envolope na cabeceira da cama de casal e algumas\n"
				"\tpilhas de lanterna no chão.");
				segredo++;
				l++;	}		
	if (decision == 3 && segredo !=0) {
			strcpy(tres, "");
				p("\tCheco o envolope. Abro ele, dentro há uma carta. O nome do destinatário está riscado,\n"
					"\te a data borrada, mas pelo estado do papel parece bastante antigo. Pertencia a um homem\n"
					"\tchamado J. Ashes\n");
					jashes();
					p("\tPor que essa carta nunca foi enviada? Tem algo acontecendo nesse hotel... Tenho que sair\n"
					"\tdaqui. Eu...\n");
					l++; }
	if (decision == 4 && segredo !=0) {
			strcpy(cuatro, "");
				p("\tRecolho as pilhas de lanterna do chão. Se a pilha acabar, agora tenho uma reserva.\n"
				"\tMe levanto e...\n");
				 l++;
		}
			if (decision == 5 && l > 3) 
				g_sq46 = g_sq46 + 1;
     		 if (decision == 5 && l < 3)
       p("\tAinda tem algo que preciso fazer aqui. Eu...");
			stop
			limpa }
void quarto48() { // Função - Quarto 48

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
				p("\tTento sair do quarto. A porta... não está mais emperrada?\n"
				"\tIsso está ficando estranho. Volto ao corredor. Eu...\n");
				q48++; 
				stop
				limpa}
	} 
		if (dec == 2) {
				copia(tchu, "");
				p("\tCheco ao redor. Vejo uma pagina rasgada no chão, uma chave\n"
				"\te uma foto na escrivaninha.");
				segredo++; }	
		if (dec == 3 &&  segredo > 0) { 
				copia(tree, "");
				p("\tConfiro a pagina. É um pedaço de pagina de um diário rasgada.\n"
				"\tPertencia a um homem chamado M Millers\n");
					mmillers03();
					p("	\n	Entregas? Como assim? Tenho certeza que Millers não era só um gerente de hotel. Há\n"
				"\talgo por trás do Hotel Vitoria... Mas não sei o que é. Talvez valha a pena\n"
				"\tinvestigar, talvez tenha haver com o motivo de eu estar aqui. Eu...\n");
				destrancar ++;}
		if (dec == 4 &&  segredo > 0) {
				copia(foour, "");
				p("\tPego a chave. Na cabeça desta está escrito '50'. A guardo e...\n");
				destrancar ++;
				chave50++;
			}
		if (dec == 5 && segredo > 0) {
					copia(faive, "");
					p("\tConfiro a foto. Nela está o hotel Vitoria com um homem, que creio ser\n"
				"\tMillers cortando a faixa de inauguração. Seu sorriso é mais do que feliz é...\n"
				"\tDoentio. Deixo a foto onde estava e...\n");	}
			stop
			limpa
			}		
void quarto50() { // Função - Quarto 50
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
		p("\tExamino ao redor. Acho então um guarda chuva, uma escrivaninha com\n"
		"\tuma chave em cima, outro recorte de jornal em cima da cama e vejo que aqui\n"
		"\thá também um banheiro. Paro de examinar.\n");
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
		p("	Pego a chave. Não tem marcação nela. A guardo e...");
		chavecorredor++;
		k --;
	}
	if (dec == 4 && os != 0) {
		copia(o4, "");
		p("	Confiro o recorte de jornal. Esse data de 02 de Fevereiro de 1985\n");
			je2();
		p("\tAlgo... mal? Cada vez mais, esse hotel parece ser mais do que realmente é.\n"
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
		p("\tOuço um barulho... estranho\n");
		Sleep(1200);
		limpa
		Sleep(1500);
		ligon
		p("\tA minha lanterna volta ao normal... o barulho se esvai.\n\tCacos de vidro se espalham por todo o chão.");
		p("\n\tO que foi isso?\n\n");
		stop
		limpa
		p("\tO vidro está quebrado e a privada seca. Na pia, há um vidro\n"
		"\tde remedios. 3 pilulas se encontram dentro. Um papel comum foi pregado com fita adesiva\n"
		"\tao redor do vidro, substituindo a bula arrancada. No papel se lê 'Para Alucinações'. Pego\n"
		"\tremédio. Nunca se sabe quando pode ser util, o guardo na minha bolsa e volto até \n"
		"\to quarto. Então...\n");
		stop
		pilulas = 3;
		k --; }
	if (dec == 6 && k == 0) {
		p("\n\tVolto ao corredor.\n\tPara que serve essa chave? Eu...");
		q50++;
		
		stop 
		limpa}	
	stop }
void corredor() { // Função  - Corredor


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
	static char c[256] = "5. Confiro o quarto sem numeração.\n";
	static char sei[256] ="6. Checo a porta ao final do corredor.\n";
	static char porta46[256] = "\tA porta é velha, está trancada mas \n	parece que vai ceder a qualquer chute... \n\n";
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
			p("\tA porta finalmente abre com um estrondo, revelando uma suíte de hotel \n"
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
			"\testá aberta. Sem chutes dessa vez. Adentro o quarto\n");
			stop
			limpa
			p("\tAssim que entro, a porta fecha atrás de mim. Foi uma\n"
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
		p("	Confiro a porta 52. Ouço um... constante choro vindo de trás da porta. Eu...");
		bater ++;; 
		stop}
			
			else {
			p("\tTento me comunicar. Pergunto se tem alguém ai, digo que estou perdido e que\n"
	"\tnão lembro de quem sou. O choro para e se torna numa risada. Começa baixa, mas\n"
	"\tlogo vai aumentando, alcançando niveis que uma garganta humana seria incapaz\n"
	"\tde produzir. Minha adrenalina sobe. Um senso de perigo emana da porta. Me\n" 
	"\tpreparo para correr para longe, a risada insana aumenta ainda mais e de repente para,\n" 
	"\tindo embora juntamente com a sensação de perigo, restando somente a memoria de uma\n" 
	"\tameaça. O que foi isso? Tenho de sair logo daqui. Não quero saber se a porta está aberta,\n"
	"\ttemo o que possa haver atrás dela, então eu...\n");
		stop
		copia(t, ""); } 
		}
	else if ( dec == 4) {
		copia(q, "");
		limpa
		p("\tConfiro a porta 49. Ouço um ruido de um rádio fora da estação. Como pode\n"
		"\tlá dentro haver um rádio se não tem eletricidade em lugar algum? A porta\n "
		"\testá trancada eu...");
		stop
		 }
	else if (dec == 5 && chave50 != 1 ) { 
		p("Confiro o quarto sem numeração. Está trancado. Volto e...\n");
		tentou++;
		 stop
		 } 
	else if (dec == 5 && chave50 != 1 && tentou > 0) {
		p("\tConfiro novamente o quarto sem numeração. Ainda está trancado. Eu...");
		stop 
		}		
	else if (dec == 5 && chave50 > 0) {
		p("\tConfiro o quarto sem numeração. Encaixo a chave 50 e giro. Para minha surpresa\n"
		"\ta porta abre. Então, esse é o quarto 50. \n\n");
		stop
		limpa
		p("\tÉ um quarto identico aos outros, as janelas também estão tampadas com tábua e\n"
		"\ta escuridão é total, salvo pelo que consigo iluminar com a lanterna. Eu...\n");
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
		
			printf("\tCheco a porta ao final do corredor. Está trancada. Volto e...");
			stop}
		else {
			p("\tCheco a porta ao final do corredor. Coloco a chave sem numeração nela.\n"
		"\tA porta desliza suavemente, revelando uma escadaria larga com tapete vermelho.\n"
		"\tAvanço nela, descendo-a.\n");
		corr++;
		stop}  
		}
		
		limpa } 	
void andar1int() { // Função - Andar 1 - Introdução

	static int injerir = 0;
	static int dec;
	static int engolir;
	static char hmm[256] = "1. Troco as pilhas da lanterna\n";
	static char eng[256] = "0. Tomo um, que mal pode fazer?\n";
	static char naoeng[256] = "1. Não tomo. Só Deus sabe há quanto tempo eles estão naquele banheiro\n";
		
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
			"minha cabeça? Tem algo me seguindo? Torço para que não.\n");
			stop
			limpa 
			ligon
			p("\tIlumino os arredores com minha lanterna.\n");
			stop
			limpa
			p("\tTudo está estranhamente conservado. Se não fosse pela poeira que permeia os moveis, eu poderia até\n\t"
			"dizer que o hotel está em horario de funcionamento. Se não fosse pelo silêncio também. O grande e\n\t"
			"assustador vazio de barulho. Começo a perceber mais minha respiração.\n\n\t"
			"Ao longo do corredor vejo os quartos 30, 33, 34 e 38. Um quarto denominado \"Suíte Especial\" está na\n\t"
			"minha frente. Deve ser aquele que li no jornal.\n\tUma espécie de playground em forma de quarto se encontra próximo... parece peculiar,\n\t"
			"para dizer o mínimo. No final do corredor, há uma especie de buraco no assoalho.  A porta para o terreo \n\tnão se encontra em local algum.\n\n"
			"\tDecido examinar o vidro de remédios");
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
				p("\tSinto o efeito imediatamente. É como se um peso sumisse\n\tda minha mente. Eu...\n");
				stop
				limpa
				visao ++;
				 }
		else if (engolir == 1) {
				limpa
				p("\tNão os tomo. Quem sabe que tipo de efeitos colaterais poderiam ter?\n");
				stop
			 }
			stop
			limpa
		}			
void quartoespecial() { // Função - Quarto Especial
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
			p("\tO que aconteceu? Por que não há ninguém? As perguntas pairam no ar... Me viro.\n");
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
			p("\tO que foi isso? Essa voz era... uma criança? Peach?\n\tPreciso sair logo daqui...\n");
			stop
			m0 --; }
		
		else if(dec == 3) {
			copia(m3 , "");
			limpa
			p("\tAcho um bilhete na mesma caligrafia do pedaço de papel que encontrei\n");
			p("\tno quarto em que despertei. A mensagem está na escrita na mesma... tinta?\n\t");
			p("\"NEM TODOS SÃO REAIS\" \n\n\tGuardo o bilhete... seria isso uma espécie de dica? Quem as escreveu?");
			m0 --;	}
		
		if(dec == 4 && m0 == 0) {
			copia(m4 , "");
			limpa
			p("\tSaio do quarto, desejo não entrar aqui novamente.\n\tEstou de volta ao corredor. Eu...\n");
			stop
			limpa
			g_qes++;	} 
			}			
void quartodascriancas() { // Função - Quarto das Crianças
	static int random;
	static int arma;
	static int dec;
	static int decp;
	static int getout = 1;
	static char one[256] = "1. Procuro pelo quarto\n";
	static char two[256] = "2. Examino os brinquedos\n";
	static char three[256] ="3. Volto ao corredor.";
	static char plusone[256] ="1. Entro pela porta \"SIM\"\n";
	static char plustwo[256] = "2. Entro pela porta \"NÃO\"\n";
	
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
					p("\tAchei uma... biblia? Não consigo lembrar se acreditava ou não em Deus.\n\tMas dado tudo que\n"
					"\testou passando aqui, talvez não seja ruim\n\tcarrega-la por ai.");
					gunbible = 2; }
				else {
				
					p("\tAchei uma... pistola! Ela se encaixa naturalmente em minha mão. É como se\n\t"
					"eu já soubesse como manusea-la. O metal frio aumenta minha sensação de segurança\n");
					gunbible = 1; }
				}
		else {
			p("\tQuê? Tem duas portas no quarto... Como não as tinha percebido antes?\n");
			p("\tElas estão do lado uma da outra. No espaço entre as duas, há uma pergunta\n");
			p("\t\"Você acredita em Deus?\"\n");
			p("\tNa porta da esquerda, há um SIM, na da direita, um NÃO\n");
			stop
			limpa
			p("%s\n%s\n", plusone, plustwo);
			scanf("%d", &decp);
				if (decp == 1) {
							p("\tEntro pela porta \"SIM\". Não tenho certeza, mas acho que eu acreditava.\n"
							"\tAcho uma biblia. Talvez não seja ruim carrega-la por ai.\n");
							gunbible = 2;
							ligoff
							stop
							limpa
							p("\tA lanterna apaga de novo. Ouço varias vozes de criança me saudando\n"
							"\tBEM VINDO AO INFERNO, elas dizem.\n");
							stop
							ligon
							limpa
							p("\tA lanterna volta.\n\tA biblia me dá um pouco de segurança\n"); }
					else if (decp == 2) {
							p("\tEntro pela porta \"NÃO\". Não creio que acreditava.\n"
							"\tAcho uma pistola. Ela se encaixa naturalmente em minha mão.\n");
							gunbible = 1;
							stop
							ligoff
							limpa
							p("\tA lanterna apaga do nada. Ouço varias vozes de criança, um aviso:\n"
							"\tO INFERNO É REAL, VOCÊ ESTÁ NELE AGORA, elas dizem\n");
							stop
							ligon
							limpa
							p("\tA lanterna volta. Agarro a arma, o metal frio me dá confiança."); 
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
		p("\tNão há mais nada aqui. Volto ao corredor\n"); }
		
	}
void quarto33() { // Função - Quarto 33

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
		p("\tRodeando o cadaver estão uma insignia, outro bilhete, e uma pagina rasgada. Minha visão\n"
		  "\ttambém é atraída para uma corda, que se encontra no armario aberto ao final da suíte. As\n"
		  "\tjanelas, como na maioria das suítes que conferi, estão trancadas por tabuas de madeira\n");
		  }
		else if (dec == 2){
			copia(l2, "");
		p("\tUma insignia que parece pertencer ao Xerife de alguma cidade ou\n\tcondado. Seria esse cadaver uma ex policial?\n");
			}
		else if (dec == 3){
		copia(l3, "");
		p("\tMesma caligrafia dos bilhetes anteriores. Dessa vez a mensagem é: A CHAVE PARA FORA\n\t"
			"ESTÁ NO 3 ANDAR. CUIDADO COM ELE. MESMO QUE ELE NÃO EXISTA.\n");
			stop
			limpa
			p("\tEntão... tenho que ir no 3 andar para sair daqui... mas, quem é ele? e\n" 
			"\to que é tudo isso sobre não existir? Bem, não importa,");
			if (gunbible == 1) 
			p(" a pistola resolverá.\n");
			else
			p(" acredito que esse livro resolverá.\n");
	}
		else if (dec == 4){
		copia(l4, "");
			p("\tParece ser um pedaço de um diario pertencente a alguém chamado Susan Beth.\n");
		susan();
			p("\tMillers matou ela. Agora é certeza, tem algo nesse hotel. Ou tinha? Isso foi décadas\n\t"
			  "atrás... Não consigo lembrar de nada. Me confundo. Eu...\n");
			}
		else if (dec == 5){
		copia(l5, "");
		os ++;
		p("\tConfiro a corda. É bastante boa para escaladas caseiras. Eu poderia usar naquele buraco.\n");
		corda++;
		}
	if (dec == 6 && os != 0){
		copia(l6, "");
		p("Volto para o corredor. Eu...");
		g_q33++;
	}
}
void andar1() { // Função - Andar 01
	
	static int dec;
	static char u2[256] = "2. Examino o quarto 30.\n";
	static char u3[256] = "3. Examino o quarto 34.\n";
	static char u4[256] = "4. Examino o quarto 38.\n";
	static char u5[256] = "5. Olho a suíte especial.\n";
	static char u6[256] = "6. Olho o quarto playground.\n";
	static char u7[256] = "7. Confiro o quarto 33.\n";
	static char u8[256] = "8. Confiro o buraco no final do corredor.\n";
		
	p("%s%s%s%s%s%s%s", u2, u3, u4, u5, u6, u7, u8);

	scanf("%d", &dec);
	limpa
		if(dec == 2) {
			copia(u2, "");
			if (visao != 0) 
				p("\tNão tem nada aqui. Eu...");
			else
				p("\tVárias vozes infantis cantam uma cantiga de roda por trás da porta."); 
				}
		else if (dec == 3) {
			copia(u3, "");
			if (visao != 0)
			p("\tUm rádio repete a palavra norte (?) incessantemente.");
			else
			p("\tUm rádio repete a palavra morte incessantemente.\n\tAfasto a cabeça rapidamente, quero manter minha sanidade.");
		}
		else if (dec == 4) {
			copia(u4, "");
			if (visao != 0) 
			p("\tO reflexo do meu olho me encara pelo olho magico.");
			else
			p("\tUm... olho me encara pelo olho mágico. Dou um pulo para trás...");
			}		
		else if (dec == 5) {
			copia(u5, "");
			p("\tEstá aberto. Entro, o que será que me espera lá?\n");
		p("\tUma suíte enorme engole meu corpo. Moveis de luxo estão espalhados por toda a extensão do\n"
		"\tquarto. Observo sua extensão, vejo janelas, um bilhete, e... mais um daqueles recortes de jornal espalhados\n"
		"\tpela suíte\n");
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
			p("\tEntro no quarto das crianças. Varios brinquedos estão espalhados pelo chão.\n\tAlguns tem a cabeça arrancada\n");
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
			p("\tÉ uma suíte comum. Ligo minha lanterna e aponto para a cama.\n");
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
			p("\tParece estar decomposto há muito tempo. Os longos cabelos loiros se preservaram\n"
			  "\tmas os vermes já devoraram qualquer resquicio de carne. Eu...\n");
			  stop
			  limpa
			  	while (g_q33 < 1) {
			  		quarto33();
			  		stop
			  		limpa
					}
					}
		else if (dec == 8 && corda == 0) {
		p("\tO buraco é enorme... se eu tivesse algo para escalar. Do contrario\n"
		"\ta queda seria uma morte dolorosa\n");
		}
		else if (dec == 8 && corda != 0) {
			copia(u8, "");
			p("\tEncaixo a corda em um ponto de apoio e desço. Na metade da descida, caio.\n");
			stop
			limpa
			p("\tA lanterna se apaga por um momento\n");
			ligoff
			Sleep(1500);
			p("\tRapidamente a luz volta.\n");
			ligon
			stop
			limpa
			p("\tPelo que entendi, caí uns 5 metros. Devo estar agora no subsolo.\n\tTive sorte de não ter quebrado nenhum osso\n");
			queda++;
			}
		}
void cozinha() { // Função - Cozinha
	processo 
	if (lanternadefeito) // Quebrar -> Variavel global -> g_czn
    Sleep(80);
    static char I[256] = "1. Investigo-a.\n	";
    static char II[256] = "2. Confiro o pedaço de jornal.\n";
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
			p("Acho mais um daqueles pedaços de jornal e, próximo a ele,\n"
			  "um papel rasgado.\n");
			life ++;
		}
		else if (dec == 2 && life != 0){
			copia(II, "");
			p("Esse jornal data de 04 de março de 1987\n");
			je4();
			p("Millers estava desesperado para vender o hotel...\n\n"
			"O que aconteceu para ele ficar assim?\n");
			pss--;
		}
		else if (dec == 3 && life != 0){
			copia(III, "");
			p("Mais um daqueles diários de Millers.\n\n");
			mmillers03();
			p("\nEssa parece ter sido escrito antes do ultimo que encontrei.\n"
  			  "Millers estava atrás de dinheiro. Para o que? E o que ele fez\n"
			  "para consegui-lo? Sinto como se já soubesse a resposta para\n"
			  "todas essas perguntas... Mas não lembro.\n");
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
void almoxarifado() { // Função - Almoxarifado
	blue 
	stop
	if (toy == 1) {
		p("\nEla aponta para mim e imita uma palavra\nLeio seus lábios, diz \"boneca\"");
		stop
		limpa
		p("1. Entrego a boneca\n");
		stop
		limpa
				p("Lembro da sala das crianças, retiro a boneca\n"
				"e a entrego. Ouço uma voz em minha cabeça.\n");
				stop
				limpa
					p("Obrigado.\n");
					Sleep(1200);
					p("Meu nome é Peach.\n");
					Sleep(1200);
					p("Você me libertou.\n\n");
					Sleep(1200);
					p("Ache os papeis.\n");
					Sleep(1200);
					p("Então a verdade será revelada.\n\n");
					Sleep(1200);	
					p( "Cuidado com ele.\n");
					stop
					limpa
				p("Então foi isso que ocorreu\n"
				"com Peach... Seguirei seus conselhos.\n"
				"Espero que agora ela esteja em paz\n");
				stop
				limpa
				p("Uma chave e um pedaço de papel aparecem\n"
				"onde ela estava momentos atrás. Pego os dois\n"
				"itens\n");
			stop
			limpa
			p("1.Confiro o bilhete\n");
			stop
			limpa
						p("Uma unica frase está marcada, em uma caligrafia\n"
						"infantil, porém bonita\n\n"
						"\"Eu te perdôo.\"\n\n");
						stop
						limpa
						bilhetepeach ++;
	}

	else if (gunbible == 2 && toy == 0) {
		p("1. Decido recitar a biblia.\n");
			stop
			limpa
				p("O efeito é imediato... ela some, mas sua\n"
				"cara é de... insatisfação. Parece que ela esperava\n"
				"algo a mais.\n");
				stop
				limpa
				p("Uma chave aparece onde ela se encontrava.\n"
				"Pego-a\n");
				stop
				limpa

	}
	
	else if (gunbible == 1 && toy == 0) {
		
		p("Após algum tempo ela some.\n");
		stop
		limpa
		p("A pistola fica quente.\n");
		stop
		limpa
		p("1. Examino a pistola\n");
		stop
		limpa
		p("Uma mensagem está marcada nela:\n \"Foi indolor\"\n");
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
p("Não há mais nada de interesse aqui. Saio,\n"
	 "deixando as vassouras e objetos de limpeza\n"
	"para trás.");
stop
limpa
ligon
Sleep(800);
p("Minha lanterna volta ao normal. Piscando.");
Sleep(500);	
chavezelador++;	
}
void quartozelador() { // Função - Quarto Zelador
	processo
	if (lanternadefeito)
	Sleep(80);
	
	p("1. Investigo o diário\n");
	stop
	limpa
	zimmerman();
	p("\n\n Então aquela garota... foi ele que...\n"
	  "Ele era cumplice de Millers? O zelador...");
	stop
	limpa
	if (bilhetepeach < 1) {
		p("Antes que possa indagar, ele some\n"
		"Um pé de cabra aparece onde ele estava.");
	}  
	else {
		p("1. Entrego o bilhete");
		stop
		limpa
        p("Entrego o bilhete. Um sorriso brota\n"
	      "de seu rosto murchado. Uma chave aparece na escrivaninha.\n"
	       "Ele some e um pé de cabra aparece onde ele estava\n");
		chavequarto0++;
				  	}
	stop
	limpa		  	
	p("2. Volto ao salão oval");
	goat++;
}
void subsolo () { // Função - Subsolo
	processo
	if (lanternadefeito) 
    Sleep(80); 
    static char Ikalel[256] = "1. Examino a cozinha.\n";
    static char IIdaniel[256] = "2. Entro no almoxarifado.\n";
    static char IIIritalindo[256] = "3. Investigo o quarto sem número.\n";
	static char IVdavinaocriouumthread[256] = "4. Olho a porta no corredor principal.\n";
	static int dec;
	
	p("%s%s%s%s", Ikalel, IIdaniel, IIIritalindo, IVdavinaocriouumthread );
	scanf("%i", &dec);
	limpa
	if (dec == 1) {
		copia(Ikalel, "");
			p("A cozinha está... Impecavelmente limpa.");
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
		p("Ela acende após um momento, soltando uma\n" 
		"luz azul escura. Iluminando uma garota\n"
		"pequena. No máximo 8 anos. Ela é translucida\n"
		"consigo ver a parede atrás dela. Por algum motivo\n"
		"não sinto medo...");
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
			p("\nA porta está trancada\n"); }
			else
			p("Uso a chave recém adquirida, a porta desliza.\n"
			"Uma habitação simples... se não fosse pelo\n"
			"velho me encarando. Ele não fala nada, só me\n"
			"encara. Não sinto nenhum perigo emanando dele\n"
			"assim como não senti com a garotinha. Um diario\n"
			"Repousa ao seu lado\n");
			stop
			limpa
					quartozelador();
					stop
					limpa
						}
	
	else if (dec == 4) {
		if ( goat == 0) 
			p("Está trancada. Vai ser necessário algo para\nforçar a abertura.");
		else {
		p("Uso o pé de cabra recém adquirido para\n"
		"forçar uma abertura. Após algum esforço\n"
		"Ela abre, me mostrando o salão principal.\n\nAvanço."); 
		g_sbl++;
		ii++;}
	}
	}
void recepcao() { // Função - Receopção
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
			p("Esse hotel era uma central de tráfico humano?\n"
			"isso explica o número de... anormalidades que há\n"
			"aqui... Millers, onde ele foi parar?\n");
			objt++;
			}
			
			else if (dec == 2) {
				copia(q2, "");
			p("Pego a chave do elevador.\n"
			  "Ao seu lado, vejo a chave do Hall de Entrada.\n"
			  "Eu poderia ir embora agora... mas não\n"
			  "posso. Há algo que tenho que fazer\n");
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
void quarto0 () { // Função - Quarto 0
					  p("Testo a chave que peguei daquele\n"
						"idoso. Ela encaixa e gira.\n"
						"Esse deve ser o quarto de Millers.\n\n"
						"Está tudo muito escuro, mas uma brecha\n"
						"de luz nas janelas trancadas ilumina uma\n"
						"foto.\n\n");
						p("Nela, Millers -- o mesmo homem que\n"
						"cortou a faixa de inauguração do hotel\n"
						"--aparece abraçado com uma mulher e uma criança\n"	
						"no hospital. Um cartaz de \"Livre da Leucemia\"\n"
						"está pendurado ao lado deles. Ao lado, há um\n"
						"pedaço de papel rasgado. Mais um diário, presumo\n\n");
							stop
							limpa
						p("1.Checo o diario\n");
						stop
						limpa
						mmillers01();
						p("Então era para isso que ele queria tanto dinheiro.\n"
							"Será que justifica? Não, provavelmente não.\n\n"
							"Volto até o Hall de Entrada.");
							discernimento++;
}
void hall() { // Função - Hall de Entrada
	static int ol = 0;
	static int err;
	static char t1[256] = "1. Confiro recepção\n";
	static char t2[256] = "2. Checo o quarto 0\n";
	static char t3[256] = "3. Examino o elevador\n";
	
		p("%s%s%s", t1, t2, t3);
		scanf("%d", &err);
		limpa
		if (err == 1) {
			copia(t1, "");
		p("Computadores antigos descansam cobertos\n"
		"De poeira. Entre os vários documentos\n"
		"espalhados, acho mais um recorte de jornal e,\n"
		"ao seu lado, uma chave. A chave do elevador.\n");
		
		stop
		limpa
		while (g_rcp < 1) {
			recepcao();
			stop
			limpa
		}
			p("Com a chave em mãos, retorno ao centro do hall.\n");
			stop
		}	
		else if (err == 2) {
			copia(t2, "");
				if (chavequarto0 == 0) 
					p("Está trancado.");
				else
				quarto0();
				 }
		else if (err == 3 ) {
			copia(t3, "3. Examino o elevador novamente\n");
				
				if (chaveelevador == 0 && ol > 0) 
					p("Trancado.");
				
				else if (chaveelevador == 0) {
					p("Está trancado... Que tipo de elevador precisa de chave?");
				ol++;
				}
				else if (chaveelevador > 0) {
					p("Abro-o. Entro nele, e aperto o 3º botão.\n"
					"A campainha toca, e subo, em direção à\n"
					"conclusão\n");
					fnly++;
				}
		}
}
void andar3() { // Função - Andar 3
	char nome[200];
	int a;
	int bbb;
	int iii;
	p("As portas do elevador abrem. O andar está\n"
	"em perfeito estado, e com uma surpresa a mais:\n"
	"Ele está");
	Sleep(1800);
	grey
	Sleep(1100);
	p(" iluminado."); 
	stop
	limpa
	p("A luz metalica do luar se infiltra\n"
	"pelas janelas, provendo uma iluminação mais\n"
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
	"Meu nome é: ");
	fgets(nome, 250, stdin);
	p("%s  ... \n", nome);
	p("Como pude me esquecer?\n");
	stop
	limpa
	p("Sinto que estou próximo de deixar esse\n"
	"lugar para trás. Avanço e vasculho ao redor.\n"
	"Os quartos estão todos trancados. Mas um em\n"
	"especial me chama a atenção.\n");
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
	"Mas ele não está morto.\n"
	"Ele está vivo. E me encara.\n");
	stop
	limpa
	ligoff
	p("Então você voltou... Achei\n");
	p("que você já tivesse ido embora\n");
	stop
	limpa
	grey
	p("Do que você está falando?\n");
	p("Você é um monstro! a policia\n");
	p("ainda está te procurando...\n" );
	stop
	limpa
	ligoff
	p("Se acalme %s. \nVocê não era assim.\n", nome);
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
	p("Vejo que você ainda está vivo, pai.\n");
	Sleep(1200);
	limpa
	ligoff
	Sleep(1200);
	p("Se você puder chamar esse estado de vivo.\n");
	Sleep(1200);
	p("Como está sua mãe?\n");
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
	p("Tudo que fiz foi por você\n");
	Sleep(1200);
	p("e por ela, você sabe, certo?\n");
	Sleep(1200);
	grey
	limpa
	p("Como eu fui parar naquela cama?\n");
	Sleep(1200);
	p("Por que eu não lembro de nada?\n");
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
	p("As vezes vejo coisas que não existem.\n");
	Sleep(1200);
	p("E tenho perda de memoria.\n");
	Sleep(1200);
	p("Entendo.");
	Sleep(1200);
	ligoff
	limpa
	p("Bem, foi bom te ver.\n");
	Sleep(1200);
	p("Você já tem que ir\n");
	Sleep(1200);
	p("Sabe que não pode ficar muito tempo\n");
	Sleep(1200);
	p("Sem o seu remedio.\n");	
	Sleep(1200);
	grey
	limpa
	p("Nem uma lagrima pela mãe?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Já chorei todas quando abandonei vocês dois.\n");
	Sleep(1200);
	grey
	limpa
	p("Você é um assassino.\n");
	Sleep(1200);
	p("Tudo que você fez...\n");
	Sleep(1200);
	p("Todas aquelas pessoas...\n");
	Sleep(1200);
	ligoff
	limpa
	p("Me culpe por isso.\n");
	Sleep(1200);
	p("Me culpe por você não ter morrido\n");
	Sleep(1200);
	p("Não me arrependo\n");
	grey
	limpa
	p("Peach...");
	Sleep(1200);
	ligoff
	limpa
	p("Natália Peach?\n");
	Sleep(1200);
	p("Ela está viva.\n");
	Sleep(1200);
	p("Encontraram ela morando\n");
	Sleep(1200);
	p("com o pai, o qual a mãe\n");
	Sleep(1200);
	p("tinha se divorciado, em outro país.\n");
	Sleep(1200);
	grey
	limpa
	p("Então... os fantasmas que vi?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Tome seu remédio\n");
	Sleep(1200);
	grey
	limpa
	p("E as mensagens que vi?\n");
	Sleep(1200);
	ligoff
	limpa
	p("Você não tomou?\n");
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
	p("para manter você vivo.\n");
	Sleep(1200);
	p("Me culpe o quanto quiser\n");
	Sleep(1200);
	p("mas não me arrependo\n");
	Sleep(1200);
	grey
	limpa
	p("...");
	Sleep(1200);
	ligoff
	limpa
	p("Presumo que você já vai\n");
	Sleep(1200);
	grey
	limpa
	p("Sim, quanto tempo passei aqui?\n");
	Sleep(1200);
	ligoff
	limpa
	p("2 dias. Mas você só veio aqui agora.\n");
	Sleep(1200);
	p("Deixei a chave em seu quarto caso você\n");
	Sleep(1200);
	p("finalmente resolvesse vir aqui.\n");
	Sleep(1200);
	p("Você ainda continua com aquele estranho habito de\nEscrever bilhetes com sua caneta vermelha?\n");
	p("Sua mãe dizia que te ajudava a manter o foco e a mente no agora.\n");
	Sleep(1200);
	grey
	limpa
	p("Então os bilhetes eram meus.\n");
	Sleep(1200);
	p("No meu quarto?\n");
	Sleep(1200);
	ligoff
	limpa
	p("No quarto 42. Mas não imagino\n");
	Sleep(1200);
	p("por que você escolheu esse.\n");
	Sleep(1200);
	p("Afinal, nenhuma porta\n,");
	Sleep(1200);
	p("que não essa, estava trancada.\n");
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
	
	

			
int main()  { // Função Principal.
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
