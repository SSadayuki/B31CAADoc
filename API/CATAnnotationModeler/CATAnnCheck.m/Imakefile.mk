#
# Imakefile de CATAnnCheck
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH = JS0GROUP \
            AD0XXBAS AC0SPBAS AC0XXLNK \
            AC0SPCHECK DraftingItfCPP MecModItf CATDraftingInfrastructure \
