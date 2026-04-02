#ifndef CATITPSDatumTarget_H
#define CATITPSDatumTarget_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSDatumSimple;
class CATITTRS_var;
class CATITTRSList;

extern "C" const IID IID_CATITPSDatumTarget;

/**
 * Interface for Datum Target TPS (datum entity).
 * TPS for Technological Product Specifications.
 */
class CATITPSDatumTarget : public IUnknown
{
  public:

    /**
     * Enum to describe the form of the target area .
     * @param Point  
     *   to show Point in visualization for target area.
     * @param Circular  
     *   to show Circle in visualization for target area.
     * @param Rectangular  
     *   to show Rectangle in visualization for target area.
     */
    enum AreaForm {
      Point,
      Circular,
      Rectangular
    };

    /**
     * Sets Label.
     */
    virtual HRESULT SetLabel (const wchar_t * iLabel) = 0;

    /**
     * Retrieves Label.
     */
    virtual HRESULT GetLabel (wchar_t ** oLabel) const = 0;

    /**
     * Retrieves simple datum, the target belongs to.
     */
    virtual HRESULT GetDatum (CATITPSDatumSimple ** oDatum) const = 0;

    /**
     * Sets the form of the target area.
     *  @param iAreaForm
     *   Form of the target area.
     *  @returns S_OK when the value has been correctly set, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT SetAreaForm (const AreaForm iAreaForm) = 0;

    /**
     * Gets the form of the target area.
     *  @param oAreaForm
     *   Form of the target area.
     *  @returns S_OK when the value has been correctly retrieved,
     */
    virtual HRESULT GetAreaForm (AreaForm& oAreaForm) const = 0; 

     /**
     * Sets the size of the circular area.
     *  @param iAreaSize
     *   Size of the Circular target area.
     *  @returns S_OK when the value has been correctly set, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT SetCircularAreaSize (const double iAreaSize) = 0;

    /**
     * Gets the size of the circular area.
     *  @param oAreaForm
     *   Size of the Circular target area.
     *  @returns S_OK when the value has been correctly retrieved, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT GetCircularAreaSize (double& oAreaForm) const = 0;

     /**
     * Sets the size of the rectangular area.
     *  @param iLength
     *   Length of the Rectangular target area.
     *  @param iWidth
     *   Width of the Rectangular target area.
     *  @returns S_OK when the values have been correctly set, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT SetRectangularAreaSize (const double iLength, const double iWidth) = 0;

    /**
     * Gets the size of the rectangular area.     
     *  @param oLength
     *   Length of the Rectangular target area.
     *  @param oWidth
     *   Width of the Rectangular target area.
     *  @returns S_OK when the values have been correctly retrieved, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT GetRectangularAreaSize (double& oLength, double& oWidth) const = 0; 

    /**
     * Sets the movable Direction TTRS.
     *  @param ispDirectionTTRS
     *   Movable Direction TTRS.
     *  If the ispDirectionTTRS is NULL_var, the 
     *   direction TTRS inside the model is removed.
     *  @returns S_OK when the TTRS has been correctly set, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT SetMovableDirectionTTRS(const CATITTRS_var& ispDirectionTTRS) = 0;

    /**
     * Gets the movable Direction TTRS.
     *  @param ospDirectionTTRS
     *   Movable Direction TTRS.
     *  @returns S_OK when the TTRS has been correctly retrieved, 
     *  @returns E_FAIL otherwise.
     */
    virtual HRESULT GetMovableDirectionTTRS(CATITTRS_var& ospDirectionTTRS) = 0;

    /**
    * Set the Datum Target movable or not.
    * @param ibMovable
    *   FALSE : Not movable.
    *   TRUE  : Movable.
    *  @returns S_OK when the value has been correctly set, 
    *  @returns E_FAIL otherwise.
    */
    virtual HRESULT SetMovable(CATBoolean &ibMovable) = 0; 

    /**
    * Get the Datum Target movable or not.
    * @param obMovable
    *   FALSE : Not movable.
    *   TRUE  : Movable.
    *  @returns S_OK when the value has been correctly retrieved, 
    *  @returns E_FAIL otherwise.
    */
    virtual HRESULT IsMovable(CATBoolean &obMovable) = 0;  
};
#endif

