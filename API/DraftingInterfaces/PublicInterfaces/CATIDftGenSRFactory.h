// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSRFactory_H
#define CATIDftGenSRFactory_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"

class CATGeometry;
class CATIUnknownList;
class CATPlane;
class CATIDftGenView;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSRFactory ;
#else
extern "C" const IID IID_CATIDftGenSRFactory ;
#endif

/**
* Definition of interface which describes generic behaviors of symbolic representations.
*/

class ExportedByDraftingItfCPP CATIDftGenSRFactory : public IUnknown
{
public:

    /**
    * Returns the 2D Geometry which represents iGeom in the GenerativeView.
    * @param iGeom
    *   a CATGeometry coming from the generated document (in CATFace)
    * @param iIID
    *   the Id of the retruned interface in oPCurveList
    * @param oPCurveList
    *   a CATIUnknownList which contains the selected PCurves
    * @return E_INVALIDARG if argument pointer NULL, or input geometry is not a CATFace
    *         E_FAIL if geometry is not represented
    *         S_OK otherwise.
    */
    virtual HRESULT GetCorresponding2DGeometry(CATGeometry * iGeom, CATIDftGenView * iView, const IID & iIID, CATIUnknownList ** oPCurveList) const = 0;

    /**
    * Returns the GeoFactory to be used to create geometry associated to the symbolic representation.
    * @param iIID
    *   the asked interface.
    * @param oFactory
    *   a pointer to the interface iIID on the GeoFactory
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if factory does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT GetGeoFactory(const IID & iIID, void ** oFactory) const = 0;

    /**
    * Returns the plane in which all the PCurves of the SRFactory are created.
    * @param oPlane
    *   the plane in which all the PCurves of the SRFactory are created
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if plane not found
    *         S_OK otherwise.
    */
    virtual HRESULT GetPlane(CATIDftGenView * iView, CATPlane ** oPlane) = 0;

    /**
    * Creates a symbolic representation which type is "3DCurvesWithProv",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_NOTIMPL
    */
    virtual HRESULT Create3DCurvesWithProvSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "TPS (Technological Product Specification)",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_NOTIMPL
    */
    virtual HRESULT CreateTechProdSpecSR(const IID & iIID, IUnknown ** oSR) const = 0;
    
    /**
    * Creates a symbolic representation which type is "thread",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateThreadSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "threadtop",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateThreadSRTop(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "threadtopfromtr",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateThreadSRTopFromTR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "Dress",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateDressSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "TPS (Technological Product Specification)",
    * in View mode, and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateTPSViewSR(const IID & iIID, IUnknown ** oSR) const = 0;
    
    /**
    * deprecated. Prefer CreateAxisLineSRWithProv
    * Creates a symbolic representation which type is "AxisLine",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateAxisLineSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "Text",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateGeoReplTextSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "Symbol",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateSymbolSR(const IID & iIID, IUnknown ** oSR) const = 0;
    
    /**
    * Creates a symbolic representation which type is "CenterLine",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateCenterLineSR(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation which type is "AxisLine",
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateAxisLineSRWithProv(const IID & iIID, IUnknown ** oSR) const = 0;

    /**
    * Creates a symbolic representation dedicated to the duplication of Annotations and DressUp,
    * and returns a pointer to the interface iIID on it.
    * @param iIID
    *   the returned interface IID
    * @param oSR
    *   the new symbolic representation
    * @return E_INVALIDARG if argument pointer NULL,
    *         E_FAIL if SR does not implement required interface
    *         S_OK otherwise.
    */
    virtual HRESULT CreateAnnotAndDressUpSRDuplicator(const IID & iIID, IUnknown ** oSR) const = 0;

};

#endif
