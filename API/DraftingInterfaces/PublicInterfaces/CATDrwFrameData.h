//=============================================================================
//                                   CATIA - Version 5
//	                          COPYRIGHT DASSAULT SYSTEMES 2002
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//-----------------------------------------------------------------------------
#ifndef CATDrwFrameData_H
#define CATDrwFrameData_H

#include "CATDrwTextPropertiesEnum.h"
#include "CATGraphicAttributeSet.h"

class CATDrwFrameData
{

public :

  // Default constructor
  CATDrwFrameData() : Type(CATDrwNone),
                      Fill(0),
                      Behavior(1),
                      Length(10.),
                      Height(10.),
                      Radius(10.),
                      Offset(10.),
                      VerticalMargin(10.), 
                      HorizontalMargin(10.),
                      Blanking(0),
                      Standard(0),
                      Sag(0),
                      BlankingOffset(0.), 
                      VisuFrame(12),
                      VisuBlankingOnGeom(11),
                      VisuBlankingOnAF(3) {};

  double Length;
  double Height;
  double Radius;
  double Offset;
  double VerticalMargin;
  double HorizontalMargin;
  int Standard;
  int Behavior;
  int Blanking;
  CATDrwFrameType Type;
  int Fill;
  double BlankingOffset;
  unsigned int VisuFrame;
  unsigned int VisuBlankingOnGeom;
  unsigned int VisuBlankingOnAF;
  int Sag;
  CATGraphicAttributeSet GraphicAttSet, FillGraphicAttSet;
};
  
#endif
