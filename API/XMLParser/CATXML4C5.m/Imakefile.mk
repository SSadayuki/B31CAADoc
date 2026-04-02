BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP SystemUUID CATXMLParserItf

CXX_EXCEPTION =

COMMON_CCFLAGS= -DNATIVE_EXCEPTION -DXML_USE_V5_MSGLOADER \
-DPROJ_XMLUTIL -DPROJ_XMLPARSER -DPROJ_SAX4C -DPROJ_SAX2 -DPROJ_DOM -DPROJ_PARSERS -DPROJ_VALIDATORS

OS = Windows_NT
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_WIN32_TRANSCODER -DXML_USE_NETACCESSOR_WINSOCK -UyyFlexLexer -DyyFlexLexer=xptFlexLexer -Uyyparse -Dyyparse=xptparse

OS = SunOS
LOCAL_YFLAGS = -p xpt
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET -Uyyreject -Dyyreject=xptreject -Dyywrap=xptwrap -Dyylook=xptlook -Dyyback=xptback -Dyyinput=xptinput -Dyyoutput=xptoutput -Dyyunput=xptunput -Dyylex=xptlex -Dyyless=xptless -Dyyleng=xptleng -Dyylenguc=xptlenguc -Dyytextarr=xpttextarr -Dyytext=xpttext -Dyyposix_point=xptposix_point -Dyynls16=xptnls16 -Dyynls_wchar=xptnls_wchar -Dyylocale=xptlocale -Dyymorfg=xptmorfg -Dyysptr=xptsptr -Dyysbuf=xptsbuf -Dyytchar=xpttchar -Dyyin=xptin -Dyyout=xptout -Dyylineno=xptlineno -Dyyestate=xptestate -Dyysvec=xptsvec -Dyybgin=xptbgin -Dyylval=xptlval -Dyyerror=xpterror -Dyycolno=xptcolno -Dyycrank=xptcrank -Dyyextra=xptextra -Dyyfnd=xptfnd -Dyylsp=xptlsp -Dyylstate=xptlstate -Dyymatch=xptmatch -Dyymbcurmax=xptmbcurmax -Dyymbinput=xptmbinput -Dyymboutput=xptmboutput -Dyymbreturn=xptmbreturn -Dyymbunput=xptmbunput -Dyyolsp=xptolsp -Dyyprevious=xptprevious -Dyytbi=xpttbi -Dyytbp=xpttbp -Dyytbuf=xpttbuf -Dyytop=xpttop -Dyytwc=xpttwc -Dyyvstop=xptvstop -Dyywbuf=xptwbuf -Dyywcrank=xptwcrank -Dyywinput=xptwinput -Dyywleng=xptwleng -Dyywoutput=xptwoutput -Dyywreturn=xptwreturn -Dyywtext=xptwtext -Dyywunput=xptwunput -Dyy_yys=xpt_yys -Dyy_yyv=xpt_yyv -D__EXTERN_C__ -Dyyact=xptact -Dyychk=xptchk -Dyydef=xptdef -Dyyexca=xptexca -Dyymaxdepth=xptmaxdepth -Dyypact=xptpact -Dyypgo=xptpgo -Dyyps=xptps -Dyypv=xptpv -Dyyr1=xptr1 -Dyyr2=xptr2 -Dyys=xpts -Dyystate=xptstate -Dyytmp=xpttmp -Dyyv=xptv -Dyyparse=xptparse
SYS_LIBS= -lxnet

OS = AIX
LOCAL_YFLAGS = -p xpt
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET -D_CPP_IOSTREAMS -Uyyreject -Dyyreject=xptreject -Dyywrap=xptwrap -Dyylook=xptlook -Dyyback=xptback -Dyyinput=xptinput -Dyyoutput=xptoutput -Dyyunput=xptunput -Dyylex=xptlex -Dyyless=xptless -Dyyleng=xptleng -Dyylenguc=xptlenguc -Dyytextarr=xpttextarr -Dyytext=xpttext -Dyyposix_point=xptposix_point -Dyynls16=xptnls16 -Dyynls_wchar=xptnls_wchar -Dyylocale=xptlocale -Dyymorfg=xptmorfg -Dyysptr=xptsptr -Dyysbuf=xptsbuf -Dyytchar=xpttchar -Dyyin=xptin -Dyyout=xptout -Dyylineno=xptlineno -Dyyestate=xptestate -Dyysvec=xptsvec -Dyybgin=xptbgin -Dyylval=xptlval -Dyyerror=xpterror -Dyycolno=xptcolno -Dyycrank=xptcrank -Dyyextra=xptextra -Dyyfnd=xptfnd -Dyylsp=xptlsp -Dyylstate=xptlstate -Dyymatch=xptmatch -Dyymbcurmax=xptmbcurmax -Dyymbinput=xptmbinput -Dyymboutput=xptmboutput -Dyymbreturn=xptmbreturn -Dyymbunput=xptmbunput -Dyyolsp=xptolsp -Dyyprevious=xptprevious -Dyytbi=xpttbi -Dyytbp=xpttbp -Dyytbuf=xpttbuf -Dyytop=xpttop -Dyytwc=xpttwc -Dyyvstop=xptvstop -Dyywbuf=xptwbuf -Dyywcrank=xptwcrank -Dyywinput=xptwinput -Dyywleng=xptwleng -Dyywoutput=xptwoutput -Dyywreturn=xptwreturn -Dyywtext=xptwtext -Dyywunput=xptwunput -D__once_yylex=__once_xptlex -Dyyparse=xptparse
SYS_LIBS= -lpthreads -liconv

OS = HP-UX
LOCAL_YFLAGS = -p xpt
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET -Uyyreject -Dyyreject=xptreject -Dyywrap=xptwrap -Dyylook=xptlook -Dyyback=xptback -Dyyinput=xptinput -Dyyoutput=xptoutput -Dyyunput=xptunput -Dyylex=xptlex -Dyyless=xptless -Dyyleng=xptleng -Dyylenguc=xptlenguc -Dyytextarr=xpttextarr -Dyytext=xpttext -Dyyposix_point=xptposix_point -Dyynls16=xptnls16 -Dyynls_wchar=xptnls_wchar -Dyylocale=xptlocale -Dyymorfg=xptmorfg -Dyysptr=xptsptr -Dyysbuf=xptsbuf -Dyytchar=xpttchar -Dyyin=xptin -Dyyout=xptout -Dyylineno=xptlineno -Dyyestate=xptestate -Dyysvec=xptsvec -Dyybgin=xptbgin -Dyylval=xptlval -Dyyerror=xpterror -Dyycolno=xptcolno -Dyycrank=xptcrank -Dyyextra=xptextra -Dyyfnd=xptfnd -Dyylsp=xptlsp -Dyylstate=xptlstate -Dyymatch=xptmatch -Dyymbcurmax=xptmbcurmax -Dyymbinput=xptmbinput -Dyymboutput=xptmboutput -Dyymbreturn=xptmbreturn -Dyymbunput=xptmbunput -Dyyolsp=xptolsp -Dyyprevious=xptprevious -Dyytbi=xpttbi -Dyytbp=xpttbp -Dyytbuf=xpttbuf -Dyytop=xpttop -Dyytwc=xpttwc -Dyyvstop=xptvstop -Dyywbuf=xptwbuf -Dyywcrank=xptwcrank -Dyywinput=xptwinput -Dyywleng=xptwleng -Dyywoutput=xptwoutput -Dyywreturn=xptwreturn -Dyywtext=xptwtext -Dyywunput=xptwunput -Dyytextuc=xpttestuc -Dyyv=xptv -Dyyparse=xptparse
LOCAL_POST_CCFLAGS = +inst_all

OS = IRIX
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET
CXX_TEMPLATE_INC    = -auto_include
CXX_TEMPLATE_PRELK  = -prelink
CXX_TEMPLATE_INST   = -ptused
SYS_LIBS= -lpthread


OS = irix_a64
LOCAL_CCFLAGS=$(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET
CXX_TEMPLATE_INC    = -auto_include
CXX_TEMPLATE_PRELK  = -prelink
CXX_TEMPLATE_INST   = -ptused
SYS_LIBS= -lpthread
LOCAL_LDFLAGS=-LD_LAYOUT:multigot=on:mgot_threshold=0xe000

OS = Linux
#LOCAL_YFLAGS = -p xpt
#LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET -Uyy_accept -Dyy_accept=xpt_accept -Uyy_acclist -Dyy_acclist=xpt_acclist -Uyy_base -Dyy_base=xpt_base -Uyy_buffer_stack -Dyy_buffer_stack=xpt_buffer_stack -Uyy_buffer_stack_max -Dyy_buffer_stack_max=xpt_buffer_stack_max -Uyy_buffer_stack_top -Dyy_buffer_stack_top=xpt_buffer_stack_top -Uyy_c_buf_p -Dyy_c_buf_p=xpt_c_buf_p -Uyychar -Dyychar=xptchar -Uyycheck -Dyycheck=xptcheck -Uyy_chk -Dyy_chk=xpt_chk -Uyy_def -Dyy_def=xpt_def -Uyydefact -Dyydefact=xptdefact -Uyydefgoto -Dyydefgoto=xptdefgoto -Uyy_did_buffer_switch_on_eof -Dyy_did_buffer_switch_on_eof=xpt_did_buffer_switch_on_eof -Uyy_ec -Dyy_ec=xpt_ec -Uyy_flex_debug -Dyy_flex_debug=xpt_flex_debug -Uyy_full_match -Dyy_full_match=xpt_full_match -Uyy_hold_char -Dyy_hold_char=xpt_hold_char -Uyyin -Dyyin=xptin -Uyy_init -Dyy_init=xpt_init -Uyyleng -Dyyleng=xptleng -Uyylineno -Dyylineno=xptlineno -Uyy_lp -Dyy_lp=xpt_lp -Uyylval -Dyylval=xptlval -Uyy_meta -Dyy_meta=xpt_meta -Uyy_more_offset -Dyy_more_offset=xpt_more_offset -Uyy_n_chars -Dyy_n_chars=xpt_n_chars -Uyynerrs -Dyynerrs=xptnerrs -Uyy_nxt -Dyy_nxt=xpt_nxt -Uyyout -Dyyout=xptout -Uyypact -Dyypact=xptpact -Uyypgoto -Dyypgoto=xptpgoto -Uyy_prev_more_offset -Dyy_prev_more_offset=xpt_prev_more_offset -Uyyr1 -Dyyr1=xptr1 -Uyyr2 -Dyyr2=xptr2 -Uyy_rule_can_match_eol -Dyy_rule_can_match_eol=xpt_rule_can_match_eol -Uyy_start -Dyy_start=xpt_start -Uyy_state_buf -Dyy_state_buf=xpt_state_buf -Uyy_state_ptr -Dyy_state_ptr=xpt_state_ptr -Uyystos -Dyystos=xptstos  -Uyytable -Dyytable=xpttable  -Uyytext -Dyytext=xpttext  -Uyytext_ptr -Dyytext_ptr=xpttext_ptr  -Uyytranslate -Dyytranslate=xpttranslate  -Uyywrap -Dyywrap=xptwrap -Dyyparse=xptparse
LOCAL_CCFLAGS = $(COMMON_CCFLAGS) -DXML_USE_ICONV_TRANSCODER -DXML_USE_NETACCESSOR_SOCKET
SYS_LIBS= -lc
