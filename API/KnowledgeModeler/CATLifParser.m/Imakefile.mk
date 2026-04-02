#
# Imakefile pour CATLifParser
#

BUILT_OBJECT_TYPE=NONE

################
OS =AIX 
################
LOCAL_LDFLAGS = -brtl
# PMM : 06-12 ajout pour renommage des symboles du yacc
LOCAL_YFLAGS = -p kwa
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwareject -Dyywrap=kwawrap -Dyylook=kwalook -Dyyback=kwaback -Dyyinput=kwainput -Dyyoutput=kwaoutput -Dyyunput=kwaunput -Dyylex=kwalex -Dyyless=kwaless -Dyyleng=kwaleng -Dyylenguc=kwalenguc -Dyytextarr=kwatextarr -Dyytext=kwatext -Dyyposix_point=kwaposix_point -Dyynls16=kwanls16 -Dyynls_wchar=kwanls_wchar -Dyylocale=kwalocale -Dyymorfg=kwamorfg -Dyysptr=kwasptr -Dyysbuf=kwasbuf -Dyytchar=kwatchar -Dyyin=kwain -Dyyout=kwaout -Dyylineno=kwalineno -Dyyestate=kwaestate -Dyysvec=kwasvec -Dyybgin=kwabgin -Dyylval=kwalval -Dyyerror=kwaerror -Dyycolno=kwacolno -Dyycrank=kwacrank -Dyyextra=kwaextra -Dyyfnd=kwafnd -Dyylsp=kwalsp -Dyylstate=kwalstate -Dyymatch=kwamatch -Dyymbcurmax=kwambcurmax -Dyymbinput=kwambinput -Dyymboutput=kwamboutput -Dyymbreturn=kwambreturn -Dyymbunput=kwambunput -Dyyolsp=kwaolsp -Dyyprevious=kwaprevious -Dyytbi=kwatbi -Dyytbp=kwatbp -Dyytbuf=kwatbuf -Dyytop=kwatop -Dyytwc=kwatwc -Dyyvstop=kwavstop -Dyywbuf=kwawbuf -Dyywcrank=kwawcrank -Dyywinput=kwawinput -Dyywleng=kwawleng -Dyywoutput=kwawoutput -Dyywreturn=kwawreturn -Dyywtext=kwawtext -Dyywunput=kwawunput -D__once_yylex=__once_kwalex
LOCAL_CCFLAGS=-Uyyreject -D__EXTERN_C__ -Dyylex=kwalex -Dyylval=kwalval -Dyytext=kwatext
LOCAL_FLFLAGS= -Pkwa


# JNI 3/7/2001 sur HP je suis oblige de renommer les symboles de cette facon car
 si on le faisait seulement dans le CATVpmPSLexDefs.h,
# le lex HP generant du code avant l'inclusion du header, on aurait toujours les
 yy* qui posent probleme (meme probleme que sur AIX, conflit
# de noms avec le parseur du knowledge...).
# OS HP-UX et non hpux_a pour avoir le meme comportement sur HP 10 et HP 11
OS=HP-UX
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwareject -Dyywrap=kwawrap -Dyylook=kwalook -Dyyback=kwaback -Dyyinput=kwainput -Dyyoutput=kwaoutput -Dyyunput=kwaunput -Dyylex=kwalex -Dyyless=kwaless -Dyyleng=kwaleng -Dyylenguc=kwalenguc -Dyytextarr=kwatextarr -Dyytext=kwatext -Dyyposix_point=kwaposix_point -Dyynls16=kwanls16 -Dyynls_wchar=kwanls_wchar -Dyylocale=kwalocale -Dyymorfg=kwamorfg -Dyysptr=kwasptr -Dyysbuf=kwasbuf -Dyytchar=kwatchar -Dyyin=kwain -Dyyout=kwaout -Dyylineno=kwalineno -Dyyestate=kwaestate -Dyysvec=kwasvec -Dyybgin=kwabgin -Dyylval=kwalval -Dyyerror=kwaerror -Dyycolno=kwacolno -Dyycrank=kwacrank -Dyyextra=kwaextra -Dyyfnd=kwafnd -Dyylsp=kwalsp -Dyylstate=kwalstate -Dyymatch=kwamatch -Dyymbcurmax=kwambcurmax -Dyymbinput=kwambinput -Dyymboutput=kwamboutput -Dyymbreturn=kwambreturn -Dyymbunput=kwambunput -Dyyolsp=kwaolsp -Dyyprevious=kwaprevious -Dyytbi=kwatbi -Dyytbp=kwatbp -Dyytbuf=kwatbuf -Dyytop=kwatop -Dyytwc=kwatwc -Dyyvstop=kwavstop -Dyywbuf=kwawbuf -Dyywcrank=kwawcrank -Dyywinput=kwawinput -Dyywleng=kwawleng -Dyywoutput=kwawoutput -Dyywreturn=kwawreturn -Dyywtext=kwawtext -Dyywunput=kwawunput -Dyytextuc=kwatestuc -Dyyv=kwav
LOCAL_YFLAGS = -p kwa
LOCAL_CCFLAGS=-Uyyreject -D__EXTERN_C__ -Dyylex=kwalex -Dyylval=kwalval -Dyytext=kwatext
LOCAL_FLFLAGS= -Pkwa

OS=IRIX 
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwareject -Dyywrap=kwawrap -Dyylook=kwalook -Dyyback=kwaback -Dyyinput=kwainput -Dyyoutput=kwaoutput -Dyyunput=kwaunput -Dyylex=kwalex -Dyyless=kwaless -Dyyleng=kwaleng -Dyylenguc=kwalenguc -Dyytextarr=kwatextarr -Dyytext=kwatext -Dyyposix_point=kwaposix_point -Dyynls16=kwanls16 -Dyynls_wchar=kwanls_wchar -Dyylocale=kwalocale -Dyymorfg=kwamorfg -Dyysptr=kwasptr -Dyysbuf=kwasbuf -Dyytchar=kwatchar -Dyyin=kwain -Dyyout=kwaout -Dyylineno=kwalineno -Dyyestate=kwaestate -Dyysvec=kwasvec -Dyybgin=kwabgin -Dyylval=kwalval -Dyyerror=kwaerror -Dyycolno=kwacolno -Dyycrank=kwacrank -Dyyextra=kwaextra -Dyyfnd=kwafnd -Dyylsp=kwalsp -Dyylstate=kwalstate -Dyymatch=kwamatch -Dyymbcurmax=kwambcurmax -Dyymbinput=kwambinput -Dyymboutput=kwamboutput -Dyymbreturn=kwambreturn -Dyymbunput=kwambunput -Dyyolsp=kwaolsp -Dyyprevious=kwaprevious -Dyytbi=kwatbi -Dyytbp=kwatbp -Dyytbuf=kwatbuf -Dyytop=kwatop -Dyytwc=kwatwc -Dyyvstop=kwavstop -Dyywbuf=kwawbuf -Dyywcrank=kwawcrank -Dyywinput=kwawinput -Dyywleng=kwawleng -Dyywoutput=kwawoutput -Dyywreturn=kwawreturn -Dyywtext=kwawtext -Dyywunput=kwawunput -Dyytextuc=kwatestuc  -Dyydebug=kwadebug -Dyyparse=kwaparse -Dyys=kwas -Dyyv=kwav -Dyyexca=kwaexca -Dyyact=kwaact -Dyypact=kwapact -Dyypgo=kwapgo -Dyyr1=kwar1 -Dyyr2=kwar2 -Dyychk=kwachk -Dyydef=kwadef -Dyyval=kwaval -Dyy_yys=kwa_yys -Dyy_yyv=kwa_yyv -Dyypv=kwapv -Dyyps=kwaps -Dyystate=kwastate -Dyytmp=kwatmp -Dyynerrs=kwanerrs -Dyyerrflag=kwaerrflag -Dyychar=kwachar -Dyymaxdepth=kwamaxdepth
#LOCAL_YFLAGS = -p kwa
LOCAL_CCFLAGS=-Uyyreject -D__EXTERN_C__ -Dyylex=kwalex -Dyylval=kwalval -Dyytext=kwatext
LOCAL_FLFLAGS= -Pkwa

 
OS=SunOS
LOCAL_YFLAGS = -p kwa
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwareject -Dyywrap=kwawrap -Dyylook=kwalook -Dyyback=kwaback -Dyyinput=kwainput -Dyyoutput=kwaoutput -Dyyunput=kwaunput -Dyylex=kwalex -Dyyless=kwaless -Dyyleng=kwaleng -Dyylenguc=kwalenguc -Dyytextarr=kwatextarr -Dyytext=kwatext -Dyyposix_point=kwaposix_point -Dyynls16=kwanls16 -Dyynls_wchar=kwanls_wchar -Dyylocale=kwalocale -Dyymorfg=kwamorfg -Dyysptr=kwasptr -Dyysbuf=kwasbuf -Dyytchar=kwatchar -Dyyin=kwain -Dyyout=kwaout -Dyylineno=kwalineno -Dyyestate=kwaestate -Dyysvec=kwasvec -Dyybgin=kwabgin -Dyylval=kwalval -Dyyerror=kwaerror -Dyycolno=kwacolno -Dyycrank=kwacrank -Dyyextra=kwaextra -Dyyfnd=kwafnd -Dyylsp=kwalsp -Dyylstate=kwalstate -Dyymatch=kwamatch -Dyymbcurmax=kwambcurmax -Dyymbinput=kwambinput -Dyymboutput=kwamboutput -Dyymbreturn=kwambreturn -Dyymbunput=kwambunput -Dyyolsp=kwaolsp -Dyyprevious=kwaprevious -Dyytbi=kwatbi -Dyytbp=kwatbp -Dyytbuf=kwatbuf -Dyytop=kwatop -Dyytwc=kwatwc -Dyyvstop=kwavstop -Dyywbuf=kwawbuf -Dyywcrank=kwawcrank -Dyywinput=kwawinput -Dyywleng=kwawleng -Dyywoutput=kwawoutput -Dyywreturn=kwawreturn -Dyywtext=kwawtext -Dyywunput=kwawunput -Dyy_yys=kwa_yys -Dyy_yyv=kwa_yyv -D__EXTERN_C__ -Dyyact=kwaact -Dyychk=kwachk -Dyydef=kwadef -Dyyexca=kwaexca -Dyymaxdepth=kwamaxdepth -Dyypact=kwapact -Dyypgo=kwapgo -Dyyps=kwaps -Dyypv=kwapv -Dyyr1=kwar1 -Dyyr2=kwar2 -Dyys=kwas -Dyystate=kwastate -Dyytmp=kwatmp -Dyyv=kwa
#LOCAL_CCFLAGS=-Uyyreject -Dyyv=kwa -Dyylex=kwalex  -D__EXTERN_C__
LOCAL_CCFLAGS=-Uyyreject -D__EXTERN_C__ -Dyylex=kwalex -Dyylval=kwalval -Dyytext=kwatext
LOCAL_FLFLAGS= -Pkwa















