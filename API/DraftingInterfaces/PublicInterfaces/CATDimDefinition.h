//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
# ifndef CATDimDefinition_H
# define CATDimDefinition_H

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include"CATDrwDimEnum.h"
#include"CATBooleanDef.h"
#include "CATErrorDef.h"

#include"DraftingItfCPP.h"
/** 
* Class to initialize basic informations necessary to the dimension creation.
*/
class ExportedByDraftingItfCPP CATDimDefinition 
{
public:
   // constructor (easier initializations)
   CATDimDefinition();
   CATDimDefinition(const CATDimDefinition &);
   ~CATDimDefinition();

   /**
   *  Assignment operator.
   *  <b>Role</b>: Assignment operator.
   */
   CATDimDefinition& operator = (const CATDimDefinition&);

   /**
   *  Dimension Type.
   *  <b>Role</b>: Define the type of the dimension .
   * @param DimensionType
   *  @see CATDrwDimType
   */
   CATDrwDimType DimensionType;

   /**
   *  Half dim dimension mode.
   *  <b>Role</b>: Define the half dim mode of the dimension .
   * @param HalfDimMode  
   *   <br>Equals TRUE to create a dimension with half dim mode.
   *   <br>Equals FALSE to create a classical dimension (default value).
   */
   boolean HalfDimMode;
   // basic (0) or cumulate (1) dimension
   /**
   *  Cumulate dimension mode.
   *  <b>Role</b>: Define the cumulate mode of the dimension.
   * @param HalfDimMode  
   *   <br>Equals TRUE to create a cumulate dimension.
   *   <br>Equals FALSE to create a classical dimension (default value).
   */
   boolean CumulateMode;
   
   /**
   *  Dimension line orientation mode.
   *  <b>Role</b>: Define the orientation of the dimension line.
   *  @see CATDrwDimRepresentation
   */
   CATDrwDimRepresentation Orientation;

   /**
   *  Dimension value orientation mode.
   *  <b>Role</b>: Define the orientation of the dimension value.
   *  @see CATDrwDimDimValueOrientationMode
   */
   CATDrwDimDimValueOrientationMode OrientationReference;

   /**
   *  Dimension value orientation angle.
   *  <b>Role</b>: Define the orientation angle between dimension value and reference.
   *  Available if OrientationReference is set to AngleDim,AngleView or AngleScreen.
   */
   double ValueAngle;

   // eventual angle between the dimensionline and the reference
   /**
   *  Define angle between the dimensionline and the reference.
   *  Available if Orientation is set to DrwDimUserDefined.
   *  <b>Role</b>: Define angle between the dimensionline and the reference. 
   */
   double OrientationAngle;

   // Valuate and get the LocationPoint and allocate memory if needed
   /**
   *  Get the LocationPoint.
   *  <b>Role</b>: Get the LocationPoint of the Dimension value.
   */
   HRESULT  GetLocationPoint(double &oX, double &oY);

   /**
   *  Set the LocationPoint.
   *  <b>Role</b>: Set the LocationPoint of the Dimension value.
   */
   void SetLocationPoint(double * ipPoint);

   /**
   *  Dimension line representation modes.
   *  <b>Role</b>: Define the dimension line modes.
   *  @param CATDrwDimLine1Part
   *   One part dimension line.
   *  @param CATDrwDimLine2Parts
   *   Two parts dimension line.
   *  @param CATDrwDimLeader1Part
   *   One part leader.
   *  @param CATDrwDimLeader2Parts
   *   Two parts leader.
   */
   short int DimLineRepresentation;

   enum CATDrwDimChamferParents { DrwDimChamferNone=1, DrwDimChamfer2Parents=2, DrwDimChamfer3Parents=3};
   /**
   *  Chamfer specific parameters.
   *  <b>Role</b>: Define the dimension line modes.
   *  @param DrwDimChamferNone
   *   Default value.
   *  @param DrwDimChamfer2Parents
   *   Chamfer dimension defined by 2 parents.
   *  @param DrwDimChamfer3Parents
   *   Chamfer dimension defined by 3 parents.
   */
   CATDrwDimChamferParents ChamferParentsNbr;

   /**
   *  Dimension line representation modes for chamfer dimension.
   *  <b>Role</b>: Define the dimension line modes.
   *  @see CATDrwDimChfRepType
   */
   CATDrwDimChfRepType ChamferRepresentationMode;

   /**
   *  Value display mode for chamfer dimension.
   *  <b>Role</b>: Define the value display mode.
   *  @see CATDrwDimChfValFormat
   */
   CATDrwDimChfValFormat ChamferValueMode;

private:
  // value location point
   double * LocationPoint;
   
public:
   /**
   *  Dimension Info.
   *  <b>Role</b>: Define the mode of the dimension's creation on circles.
   * @param _Info
   *  @see CATAnnInfo
   */
   CATAnnInfo _Info;

} ;


# endif
