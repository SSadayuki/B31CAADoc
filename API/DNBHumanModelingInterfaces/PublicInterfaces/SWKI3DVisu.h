// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKI3DVisu_h
#define _SWKI3DVisu_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework (2000) Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//       SWKI3DVisu interface.
//       This interface offers miscellaneous visualization
//       services for displayable objects.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetDisplayFlag
//    GetDisplayFlag
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 27/03/00
//  Goal  : Creation
// *****************************************************************************

// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWKSegmentMappingOperator;
//
// --- Visualization
class CAT3DViewpoint;
class CATGraphicMaterial;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKI3DVisu;
#else
extern "C" const IID IID_SWKI3DVisu;
#endif

#define SWK_SEGMENTS                   0x00001
#define SWK_ELLIPSES                   0x00002
#define SWK_MESHES                     0x00004
#define SWK_CENTER_OF_GRAVITY          0x00008

#define SWK_LINES_OF_SIGHT             (0x00010|0x00020|0x00040)
#define SWK_CENTRAL_CONES              (0x00080|0x00100|0x00200)
#define SWK_PERIPH_CONES               (0x00400|0x00800|0x01000)
#define SWK_BLIND_CONES                (0x02000|0x04000|0x08000)

#define SWK_SPHERICAL_CONES            0x10000
#define SWK_CONES_WITH_BOUNDING_SPHERE 0x20000
#define SWK_REFERENTIAL                0x40000
#define SWK_BALANCE                    0x80000

/**
  *   This interface offers miscellaneous visualization
  *   services. Manikins and segments adhere to this
  *   interface.
  **/

class ExportedBySWKHumanModelingItf SWKI3DVisu : public CATBaseUnknown
{
    CATDeclareInterface;

 public:

    /**
      * Set the display flag. This flag informs a displayable object whether or not
      * to display segments, ellipses, meshes, center of gravity, lines
      * of sight and  vision cones.
      *
      * @param piFlag The display flag, which is made of the
      * concatenation of the several display constants. If a
      * given element appears in the display flag, then that
      * element will be displayed.
      *
      * @sample
      * The following example displays the segments and ellipses
      * of the manikin:
      * <code>
      *  SWKIManikin * myManikin = [...];
      *  SWKI3DVisu * visu = NULL;
      *  myManikin->QueryInterface(SWKI3DVisu::ClassId(), (void**) &visu);
      *  visu->SetDisplayFlag(SWK_SEGMENTS|SWK_ELLIPSES);
      *  visu->Release();
      * </code>
      **/
    virtual HRESULT SetDisplayFlag(int piFlag, boolean piNeedRefreshRep = TRUE) = 0;

    /**
      * Return the current display flag.
      **/
    virtual int GetDisplayFlag() const = 0;
};

CATDeclareHandler(SWKI3DVisu, CATBaseUnknown);

#endif
