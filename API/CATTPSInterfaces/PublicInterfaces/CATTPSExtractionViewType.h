#ifndef CATTPSExtractionViewType_H
#define CATTPSExtractionViewType_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * Type of the Extraction View  of Note Object Attribute (Text or Ditto).
 */
enum CATTPSExtractionViewType
{
  CATTPSAlignedSectionView        = 0,
  CATTPSAlignedSectionCutView     = 1,
  CATTPSOffsetSectionView         = 2,
  CATTPSOffsetSectionCutView     = 3
};

#endif
