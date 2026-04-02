# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATJSyTransaction.mj
#======================================================================
#
#  Sept 2002  Creation
#======================================================================
#
# Java module
#
BUILT_OBJECT_TYPE=JAVA

TYPE = COMMON

# _MK_TRGOPTS=1.7

# WAStx module contains IBM public extension to JTA com.ibm.websphere.jtaextensions
LINK_WITH = J2EEtransaction10 WAStx

LOCAL_JAVA_FLAGS=-J-ms16m -J-mx96m


