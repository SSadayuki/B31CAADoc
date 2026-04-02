##########################################################################
#
#       makefile customization lib:  KR0GGG
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE= NONE

COMMON_CCFLAGS=-Uyyreject -D__EXTERN_C__ -Dyyerror=kweerror -Dyylex=kwelex -Dyylval=kwelval

OS=COMMON
LOCAL_CCFLAGS = $(COMMON_CCFLAGS)
LOCAL_FLFLAGS = -Pkwe

################
OS =AIX 
################
LOCAL_LDFLAGS = -brtl
# PMM : 06-12 ajout pour renommage des symboles du yacc
LOCAL_YFLAGS = -p kwe
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwereject -Dyywrap=kwewrap -Dyylook=kwelook -Dyyback=kweback -Dyyinput=kweinput -Dyyoutput=kweoutput -Dyyunput=kweunput -Dyylex=kwelex -Dyyless=kweless -Dyyleng=kweleng -Dyylenguc=kwelenguc -Dyytextarr=kwetextarr -Dyytext=kwetext -Dyyposix_point=kweposix_point -Dyynls16=kwenls16 -Dyynls_wchar=kwenls_wchar -Dyylocale=kwelocale -Dyymorfg=kwemorfg -Dyysptr=kwesptr -Dyysbuf=kwesbuf -Dyytchar=kwetchar -Dyyin=kwein -Dyyout=kweout -Dyylineno=kwelineno -Dyyestate=kweestate -Dyysvec=kwesvec -Dyybgin=kwebgin -Dyylval=kwelval -Dyyerror=kweerror -Dyycolno=kwecolno -Dyycrank=kwecrank -Dyyextra=kweextra -Dyyfnd=kwefnd -Dyylsp=kwelsp -Dyylstate=kwelstate -Dyymatch=kwematch -Dyymbcurmax=kwembcurmax -Dyymbinput=kwembinput -Dyymboutput=kwemboutput -Dyymbreturn=kwembreturn -Dyymbunput=kwembunput -Dyyolsp=kweolsp -Dyyprevious=kweprevious -Dyytbi=kwetbi -Dyytbp=kwetbp -Dyytbuf=kwetbuf -Dyytop=kwetop -Dyytwc=kwetwc -Dyyvstop=kwevstop -Dyywbuf=kwewbuf -Dyywcrank=kwewcrank -Dyywinput=kwewinput -Dyywleng=kwewleng -Dyywoutput=kwewoutput -Dyywreturn=kwewreturn -Dyywtext=kwewtext -Dyywunput=kwewunput -D__once_yylex=__once_kwelex

# JNI 3/7/2001 sur HP je suis oblige de renommer les symboles de cette facon car si on le faisait seulement dans le CATVpmPSLexDefs.h,
# le lex HP generant du code avant l'inclusion du header, on aurait toujours les yy* qui posent probleme (meme probleme que sur AIX, conflit
# de noms avec le parseur du knowledge...).
# OS HP-UX et non hpux_a pour avoir le meme comportement sur HP 10 et HP 11
OS=HP-UX
LOCAL_YFLAGS = -p kwe
# LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwereject -Dyywrap=kwewrap -Dyylook=kwelook -Dyyback=kweback -Dyyinput=kweinput -Dyyoutput=kweoutput -Dyyunput=kweunput -Dyylex=kwelex -Dyyless=kweless -Dyyleng=kweleng -Dyylenguc=kwelenguc -Dyytextarr=kwetextarr -Dyytext=kwetext -Dyyposix_point=kweposix_point -Dyynls16=kwenls16 -Dyynls_wchar=kwenls_wchar -Dyylocale=kwelocale -Dyymorfg=kwemorfg -Dyysptr=kwesptr -Dyysbuf=kwesbuf -Dyytchar=kwetchar -Dyyin=kwein -Dyyout=kweout -Dyylineno=kwelineno -Dyyestate=kweestate -Dyysvec=kwesvec -Dyybgin=kwebgin -Dyylval=kwelval -Dyyerror=kweerror -Dyycolno=kwecolno -Dyycrank=kwecrank -Dyyextra=kweextra -Dyyfnd=kwefnd -Dyylsp=kwelsp -Dyylstate=kwelstate -Dyymatch=kwematch -Dyymbcurmax=kwembcurmax -Dyymbinput=kwembinput -Dyymboutput=kwemboutput -Dyymbreturn=kwembreturn -Dyymbunput=kwembunput -Dyyolsp=kweolsp -Dyyprevious=kweprevious -Dyytbi=kwetbi -Dyytbp=kwetbp -Dyytbuf=kwetbuf -Dyytop=kwetop -Dyytwc=kwetwc -Dyyvstop=kwevstop -Dyywbuf=kwewbuf -Dyywcrank=kwewcrank -Dyywinput=kwewinput -Dyywleng=kwewleng -Dyywoutput=kwewoutput -Dyywreturn=kwewreturn -Dyywtext=kwewtext -Dyywunput=kwewunput -Dyytextuc=kwetestuc -Dyyv=kwev

OS=IRIX 
#LOCAL_YFLAGS = -p kwe
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwereject -Dyywrap=kwewrap -Dyylook=kwelook -Dyyback=kweback -Dyyinput=kweinput -Dyyoutput=kweoutput -Dyyunput=kweunput -Dyylex=kwelex -Dyyless=kweless -Dyyleng=kweleng -Dyylenguc=kwelenguc -Dyytextarr=kwetextarr -Dyytext=kwetext -Dyyposix_point=kweposix_point -Dyynls16=kwenls16 -Dyynls_wchar=kwenls_wchar -Dyylocale=kwelocale -Dyymorfg=kwemorfg -Dyysptr=kwesptr -Dyysbuf=kwesbuf -Dyytchar=kwetchar -Dyyin=kwein -Dyyout=kweout -Dyylineno=kwelineno -Dyyestate=kweestate -Dyysvec=kwesvec -Dyybgin=kwebgin -Dyylval=kwelval -Dyyerror=kweerror -Dyycolno=kwecolno -Dyycrank=kwecrank -Dyyextra=kweextra -Dyyfnd=kwefnd -Dyylsp=kwelsp -Dyylstate=kwelstate -Dyymatch=kwematch -Dyymbcurmax=kwembcurmax -Dyymbinput=kwembinput -Dyymboutput=kwemboutput -Dyymbreturn=kwembreturn -Dyymbunput=kwembunput -Dyyolsp=kweolsp -Dyyprevious=kweprevious -Dyytbi=kwetbi -Dyytbp=kwetbp -Dyytbuf=kwetbuf -Dyytop=kwetop -Dyytwc=kwetwc -Dyyvstop=kwevstop -Dyywbuf=kwewbuf -Dyywcrank=kwewcrank -Dyywinput=kwewinput -Dyywleng=kwewleng -Dyywoutput=kwewoutput -Dyywreturn=kwewreturn -Dyywtext=kwewtext -Dyywunput=kwewunput -Dyytextuc=kwetestuc  -Dyydebug=kwedebug -Dyyparse=kweparse -Dyys=kwes -Dyyv=kwev -Dyyexca=kweexca -Dyyact=kweact -Dyypact=kwepact -Dyypgo=kwepgo -Dyyr1=kwer1 -Dyyr2=kwer2 -Dyychk=kwechk -Dyydef=kwedef -Dyyval=kweval -Dyy_yys=kwe_yys -Dyy_yyv=kwe_yyv -Dyypv=kwepv -Dyyps=kweps -Dyystate=kwestate -Dyytmp=kwetmp -Dyynerrs=kwenerrs -Dyyerrflag=kweerrflag -Dyychar=kwechar -Dyymaxdepth=kwemaxdepth

OS=SunOS
LOCAL_YFLAGS = -p kwe
#LOCAL_CCFLAGS=-Uyyreject -Dyyreject=kwereject -Dyywrap=kwewrap -Dyylook=kwelook -Dyyback=kweback -Dyyinput=kweinput -Dyyoutput=kweoutput -Dyyunput=kweunput -Dyylex=kwelex -Dyyless=kweless -Dyyleng=kweleng -Dyylenguc=kwelenguc -Dyytextarr=kwetextarr -Dyytext=kwetext -Dyyposix_point=kweposix_point -Dyynls16=kwenls16 -Dyynls_wchar=kwenls_wchar -Dyylocale=kwelocale -Dyymorfg=kwemorfg -Dyysptr=kwesptr -Dyysbuf=kwesbuf -Dyytchar=kwetchar -Dyyin=kwein -Dyyout=kweout -Dyylineno=kwelineno -Dyyestate=kweestate -Dyysvec=kwesvec -Dyybgin=kwebgin -Dyylval=kwelval -Dyyerror=kweerror -Dyycolno=kwecolno -Dyycrank=kwecrank -Dyyextra=kweextra -Dyyfnd=kwefnd -Dyylsp=kwelsp -Dyylstate=kwelstate -Dyymatch=kwematch -Dyymbcurmax=kwembcurmax -Dyymbinput=kwembinput -Dyymboutput=kwemboutput -Dyymbreturn=kwembreturn -Dyymbunput=kwembunput -Dyyolsp=kweolsp -Dyyprevious=kweprevious -Dyytbi=kwetbi -Dyytbp=kwetbp -Dyytbuf=kwetbuf -Dyytop=kwetop -Dyytwc=kwetwc -Dyyvstop=kwevstop -Dyywbuf=kwewbuf -Dyywcrank=kwewcrank -Dyywinput=kwewinput -Dyywleng=kwewleng -Dyywoutput=kwewoutput -Dyywreturn=kwewreturn -Dyywtext=kwewtext -Dyywunput=kwewunput -Dyy_yys=kwe_yys -Dyy_yyv=kwe_yyv -D__EXTERN_C__ -Dyyact=kweact -Dyychk=kwechk -Dyydef=kwedef -Dyyexca=kweexca -Dyymaxdepth=kwemaxdepth -Dyypact=kwepact -Dyypgo=kwepgo -Dyyps=kweps -Dyypv=kwepv -Dyyr1=kwer1 -Dyyr2=kwer2 -Dyys=kwes -Dyystate=kwestate -Dyytmp=kwetmp -Dyyv=kwe
