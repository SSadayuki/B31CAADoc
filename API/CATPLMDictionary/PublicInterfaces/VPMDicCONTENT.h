//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=============================================================================
#ifndef _VPMDicCONTENT_h
#define _VPMDicCONTENT_h
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 */

enum VPMDicCONTENT
    { VPMDicMETADATA  = 0
    , VPMDicTUNING    = 1
    , VPMDicRBODEF    = 2
    , VPMDicRBOMAP    = 3
    , VPMDicMETAPLM   = 4
    };

static char * _ContentLabel[] =
    { "metadata"
    , "tuning"
    , "rbodef"
    , "rbomap"
    , "metaplm"
    };

#endif

