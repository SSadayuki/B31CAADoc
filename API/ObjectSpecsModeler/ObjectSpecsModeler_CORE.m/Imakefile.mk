BUILT_OBJECT_TYPE= VIRTUAL GROUP
#if (defined CATIAR211)
SPECIFIC= CATObjectModelerContBase
#else
SPECIFIC= 
#endif
ALIASES_ON_IMPORT = \
		 @ObjectModelerCollection \
		 AD0XXBAS AC0XXLNK  \
     CATObjectSpecsModeler \
		 ObjectModelerSystem \
		 $(SPECIFIC)
