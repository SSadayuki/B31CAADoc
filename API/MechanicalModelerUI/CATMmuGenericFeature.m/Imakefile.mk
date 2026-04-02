BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = \
    CATApplicationFrame                  \ # ApplicationFrame                  CATApplicationFrame.m
    CATOmnMain                           \ # ObjectModelerNavigator            CATOmnMain.m
    CATIAApplicationFrame                \ # CATIAApplicationFrame             CATIAApplicationFrame.m
    CATMecModLiveUseItf                  \ # CATMecModLiveUseItf               CATMecModLiveUseItf.m
    CATMecModUseItf                      \ # CATMecModUseItf                   CATMecModUseItf.m
    CATGraph                             \ # Graph                             CATGraph.m
    CATInteractiveInterfaces             \ # InteractiveInterfaces             CATInteractiveInterfaces.m
    KnowledgeItf                         \ # KnowledgeInterfaces               KnowledgeItf.m
    CATLiteralFeatures                   \ # LiteralFeatures                   CATLiteralFeatures.m
    CATMecModInterfaces                  \ # MecModInterfaces                  CATMecModInterfaces.m
    CATMecModLiveInterfaces              \ # MecModLiveInterfaces              CATMecModLiveInterfaces.m
	 CATMmrSys                            \ # MechanicalModeler                 CATMmrSys
    CATMechanicalModeler                 \ # MechanicalModeler                 CATMechanicalModeler.m
    CATMechanicalModelerLive             \ # MechanicalModelerLive             CATMechanicalModelerLive.m
    CATMechanicalModelerUI               \ # MechanicalModelerUI               CATMechanicalModelerUI.m
    CATObjectModelerBase                 \ # ObjectModelerBase                 CATObjectModelerBase.m
    CATObjectModelerNavigator            \ # ObjectModelerNavigator            CATObjectModelerNavigator.m
    CATObjectSpecsModeler                \ # ObjectSpecsModeler                CATObjectSpecsModeler.m
    JS0FM                                \ # System                            JS0FM.m
    JS0GROUP                             \ # System                            JS0GROUP.m
#
