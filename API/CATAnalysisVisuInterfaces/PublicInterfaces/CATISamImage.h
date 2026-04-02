#ifndef CATISamImage_H
#define CATISamImage_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImage : interface designed to modify "images"
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

// prereqs  System
#include "CATListOfCATBaseUnknown.h"
#include "CATString.h"
#include "CATBoolean.h"

// prereqs SamVisuIterfaces 
#include "CATSamVisuTypeName.h"
class CATISamImageColorMap;

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImage;

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
 * But modifications may be done : <br> For example : change the visu,the criteria,the occurrence, 
 * the axis sytem,...<br>
 * Query this interface in order to make some changes to an existing <i>Image</i>.
 */ 

class ExportedByCATSamVisuUUID CATISamImage : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
  /**
    * Retrieves the list of objects from which the values will be retrieved with the CATICharacCollector interface.
    * @param oValuesProviders.
    * the list of CATICharacCollector
    */
  virtual HRESULT GetValuesProviders ( CATLISTP(CATBaseUnknown) & oValuesProviders ) = 0;

  /**
    * Retrieves the list of objects from which the displacements will be retrieved with the CATICharacCollector interface.
    * @param oDisplacementsProviders.
    * the list of CATICharacCollector
    */
  virtual HRESULT GetDisplacementsProviders ( CATLISTP(CATBaseUnknown) & oDisplacementsProviders ) = 0;

  /**
    * Retrieves if the image is activated or not.
    * @param oActivationStatus.
    * TRUE if the image is activated
    */
  virtual HRESULT GetActivationStatus ( CATBoolean & oActivationStatus ) = 0;

  /**
    * To activate or deactive an image.
    * @param oActivationStatus.
    * TRUE if the image is activated
    */
  virtual HRESULT SetActivationStatus ( CATBoolean iActivationStatus ) = 0;

  /**
    * Retrieves if Deformed is ON or OFF.
    * @param oMode.
    * the deform mode
    */
  virtual HRESULT GetDeformMode ( CATBoolean & oMode ) = 0;

  /**
    * Sets the Deform ON or OFF.
    * @param iMode.
    * the deform mode
    * <br><b>Legal values</b>:
    * <ul>
    * <li><tt>Deform ON</tt> is TRUE.</li>
    * <li><tt>Deform OFF</tt> is FALSE.</li> 
    * </ul>
    */
  virtual HRESULT SetDeformMode ( CATBoolean iMode ) = 0;

  /**
    * Retrieves the current amplification scale factor.
    * @param oAmplificationFactor
    * the amplification scale factor
    */
  virtual HRESULT GetDeformCoefficient ( float & oAmplificationFactor ) = 0;

  /**
    * Retrieves the default amplification scale factor.
    * @param oDefaultFactor.
    * the default amplification scale factor
    */
  virtual HRESULT GetDefaultCoefficient ( float & oDefaultFactor ) = 0;

  /**
    * Sets the amplification scale factor.
    * @param iAmplificationFactor.
    * the amplification scale factor
    */
  virtual HRESULT SetDeformCoefficient ( float iAmplificationFactor ) = 0;

  /**
    * Retrieves the groups of entities on which the image is computed.
    * @param oSamGroupList.
    *   the list of objects that implement the CATISamGroup interface
    */
  virtual HRESULT GetSelectionGroup ( CATLISTP(CATBaseUnknown) & oSamGroupList ) = 0;

  /**
    * Sets the groups of entities on which the image will be computed.
    * @param oSamGroupList.
    *   the list of objects that implement the CATISamGroup interface
    */
  virtual HRESULT SetSelectionGroup ( const CATLISTP(CATBaseUnknown) & iSamGroupList ) = 0;

  /**
    * Retrieves all available Visu Types for this image (that is for a given physical type of characteristic). 
    * Retrieves also the current Visu Type.
    * @param oVisuTypeName
    * List of supported Visu Types
    * @param oNbType
    * Number of supported Visu Types
    * @param oCurrentNumber
    * Position of the current Visu Type in the previous array
    * @see CATSamVisuTypeName
    */
  virtual HRESULT GetAllAvailableVisuTypeNames ( CATSamVisuTypeName * & oVisuTypeName,
                                                 int &                  oNbType,
                                                 int &                  oCurrentNumber ) = 0;

  /**
    * Retrieves the current Visu Type.
    * @param oVisuTypeName
    * The current type of visu
    * @see CATSamVisuTypeName
    */
  virtual HRESULT GetVisuTypeName ( CATSamVisuTypeName & oVisuTypeName ) = 0;

  /**
    * Changes the current Visu Type.
    * @param iVisuTypeName
    * The new type of visu
    * @see CATSamVisuTypeName
    */
  virtual HRESULT SetVisuTypeName ( CATSamVisuTypeName iVisuTypeName ) = 0;

  /**
    * Retrieves all available Criteria for the current visu type. 
    * Retrieves also the current Criteria.
    * @param oCriteriaName
    * List of supported Criteria for the current visu type
    * @param oNbString
    * Number of supported Criteria
    * @param oCurrentNumber
    * Position of the current Criteria in the previous array
    */
  virtual HRESULT GetAllAvailableCriteriaNames ( CATString * & oCriteriaName,
                                                 int &         onbString,
                                                 int &         oCurrentNumber ) = 0;

  /**
    * Retrieves the current Criteria.
    * @param oCriteriaName
    * The current Criteria
    */
  virtual HRESULT GetCriteriaName ( CATString & oCriteriaName ) = 0;

  /**
    * Changes the current Criteria.
    * @param iCriteriaName
    * The new Criteria
    */
  virtual HRESULT SetCriteriaName ( CATString iCriteriaName ) = 0;

  /**
    * Retrieves the current occurrence number.
    * (that is for example the mode number in a frequency or buckling analysis)
    * @param oCurrentNumber
    */
  virtual HRESULT GetCurrentOccurrence ( int & oCurrentOccurrence ) = 0;

  /**
    * Sets the current occurrence number that is for example the mode in a frequency or buckling analysis.
    * @param iCurrentOccurrence
    * The occurrence number.
    */
  virtual HRESULT SetCurrentOccurrence ( int iCurrentOccurrence ) = 0;

  /**
    * Retrieves the color map of the image.
    * @param oColorMap
    * the color map
    * @see CATISamImageColorMap
    */
  virtual HRESULT GetColorMap ( CATISamImageColorMap * & oColorMap ) = 0;

  /**
    * Set the color map of the image. This can be used to share color map
    * between several images.
    * @param iColorMap
    * the color map
    * @see CATISamImageColorMap
    */
  virtual HRESULT SetColorMap ( CATISamImageColorMap * iColorMap ) = 0;

  /**
    * Only useful when the color map is shared between several images.
    * A copy of the current shared color map is done.
    */
  virtual HRESULT UnSetColorMap() = 0;

  /**
    * Updates the visualization of the image.
    */
  virtual HRESULT UpdateDisplay () = 0;
};

CATDeclareHandler(CATISamImage, CATBaseUnknown);

#endif

