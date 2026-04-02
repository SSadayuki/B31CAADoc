#ifndef CATIPrtSimpleLimit_H
#define CATIPrtSimpleLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>

#include <CATTopLimitType.h>
#include <CATTopPropagationType.h>
#include <ListPOfCATCell.h>
class CATISpecObject_var;
class CATUnicodeString;
class CATGeometry_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtSimpleLimit;
#else
extern "C" const IID IID_CATIPrtSimpleLimit;
#endif

/**
 * Interface which provides a basic limit behaviour to a limit feature.
 * <b>Role</b>: Some features contain one or several limit components which 
 * describe how their own shape is limited.
 * <br>A simple limit allows users to set specifications and to retrieve associated data 
 * deduced from those specifications. Offsets are not managed.    
 * @see CATIPrtLimit, CATIPrismLimit, CATIHoleLimit, CATISweepLimit
 */
class ExportedByPartItf CATIPrtSimpleLimit : public CATBaseUnknown
{
  CATDeclareInterface;
   
public:
   
/**
 * Sets the limit type specification.
 * @param iType
 *   The limit type.
 *   <br><b>Legal values</b>: They are provided with the <tt>CatLimitMode</tt> enum.
 * <br>
 * Prismatic elements and holes are limited with surfaces or offset values.
 * The <tt>CatLimitMode</tt> enum lists appropriate values to set this property.
 * <br>- <tt>catOffsetLimit</tt>: The shape is limited with an offset value.
 * <br>- <tt>catUpToNextLimit</tt>: The shape is limited with the next boundary encountered in its mechanical body.
 * <br>- <tt>catUpToLastLimit</tt>: The shape is limited with the last boundary encountered in its mechanical body.
 * <br>- <tt>catUpToPlaneLimit</tt>: The shape is limited with a selected plane.
 * <br>- <tt>catUpToSurfaceLimit</tt>: The shape is limited with a selected surface.
 * <br>- <tt>catUpThruNextLimit</tt>: The shape is limited with the next boundary encountered and always removes material.
 */
  virtual void SetExtentType(const int iType) = 0;

/**
 * @nodoc
 */
  virtual void SetExtentTypeName(const CATUnicodeString& iType) = 0;

/**
 * Sets the limiting element for the <tt>catUpToPlaneLimit</tt> and <tt>catUpToSurfaceLimit</tt> types.
 * @param ihInit
 *   The limiting element specification.
 *   <br>For the <tt>catUpToPlaneLimit</tt> type, it must be a plane feature or a planar FSur feature (CATIMfFsur).
 *   <br>For the <tt>catUpToSurfaceLimit</tt> type, it must be a face feature.
 *   <br>If this face belongs to some surfacic geometry, it must be a FSur feature. Then the entire surface 
 *   is used to limit the shape.
 *   <br>If it is a face of a volume, it must be a RSur feature (CATIMfRsur) which belongs to the body in 
 *   which the limited feature is created. In this case, the limiting surface is defined by a propagation 
 *   on the surface of the body starting from the initial face.
 */
  virtual void SetInit(const CATISpecObject_var ihInit) = 0;
    

/**
 * Returns the limit type specification.
 * @return
 *   The limit type.
 */
  virtual int GetExtentType() const = 0;

/**
 * @nodoc
 */
  virtual CATUnicodeString GetExtentTypeName() const = 0;

/**
 * Returns the limiting element specification.
 * @return
 *   The limiting element.
 */
  virtual CATISpecObject_var GetInit() const = 0;
   

/**
 * Computes the data associated to the specifications.
 * <br><b>Role</b>: These data should be needed to build topological operators  
 * or scopes associated to the feature containing the limit. 
 */
  virtual void ExtractData() = 0;

/**
 * Releases the data associated to the specifications.
 * <br><b>Role</b>: After a call to this method, the computed data are released 
 * and not available anymore.
 */
  virtual void ClearData() = 0;

/**
 * Gets the topological limit type associated to the specifications.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param oLimitType
 *   The topological limit type.
 */
  virtual void GetLimitType(CATTopLimitType& oLimitType) const = 0;

/**
 * Gets the topological propagation type associated to the specifications.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param oPropagType
 *   The topological propagation type.
 */
  virtual void GetPropagType(CATTopPropagationType& oPropagType) const = 0;

/**
 * Gets the geometrical limiting element associated to the specifications.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param ohInitGeom
 *   The geometrical limiting element.
 */
  virtual void GetInitGeom(CATGeometry_var& ohInitGeom) const = 0;

/**
 * Gets the geometrical limiting elements associated to the specifications.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param oInitGeomList
 *   The geometrical limiting elements.
 */
  virtual void GetInitGeomList(ListPOfCATCell& oInitGeomList) const = 0;

/**
 * Gets the geometrical element used for propagation associated to the specifications.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param ohPropagGeom
 *   The geometrical element used for propagation.
 */
  virtual void GetPropagGeom(CATGeometry_var& ohPropagGeom) const = 0;

/**
 * Gets the specification used to create the scope associated to the feature.
 * <br><b>Precondition</b>: The data must have been computed with ExtractData()
 * before calling this method.
 * <br><b>Postcondition</b>: Do not forget to release the data with ClearData()
 * after reading.
 * @param ohNamingSpec
 *   The specification used to create scopes.
 */
  virtual void GetNamingSpec(CATBaseUnknown_var& ohNamingSpec) const = 0; 
};

CATDeclareHandler(CATIPrtSimpleLimit, CATBaseUnknown);

#endif // CATIPrtSimpleLimit_H
