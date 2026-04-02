// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamISpace
//
//=============================================================================
//
// Usage Notes: Abstract Base Class
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamISpace_H
#define CATSamISpace_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "IUnknown.h"
#include "CATListOfCATUnicodeString.h"

#include "CATAnalysisExplicitTypes.h"
#include "CATAnalysisExplicitModel.h"
#include "CATString.h"

class CATSamStream ;

/**
 * Base class for nD homogeneous Spaces
 */
class ExportedByCATSamExpression CATSamISpace
{
public:
   /**
	* Dimension
	* @return The dimension of the space.
	*/
	virtual unsigned int		GetDimension() const = 0;

   /**
    * Returns the type of content
	* @return Values are CATSamValue
	*/
	virtual CATSamValue			ContentType() const = 0;

   /**
    * Streaming of this Space
	* @param ioStream
	*   The Stream where to write to.
	* @param iVersion
	*   The Version format in which to write.
	* @param iPhase
	*   The phase of streaming do be performed.
	* @return S_OK if succeeded
	*/
	virtual HRESULT				Stream(CATSamStream &ioStream,int iVersion,int iPhase, CATBoolean iFullStream = TRUE) { return E_FAIL; }

   /**
    * Unstreaming of this Space
	* @param iStream
	*   The Stream where to read from.
	* @param iVersion
	*   The Version format which to read.
	* @param iPhase
	*   The phase of unstreaming do be performed.
	* @param iModel
	*   The model in which to interprete the values.
	* @return S_OK if succeeded
	*/
	virtual HRESULT				UnStream(CATSamStream &iStream,int iVersion,int iPhase,const CATAnalysisExplicitModel* iModel) { return E_FAIL; }

   /**
    * Dump the contents and meta-info of this Space to trace SAMTraceExpli
	* @param iIndent
	*   The indent to %apply.
	* @param iRecurse
	*   Not used.
	* @param iLoopSize
	*   Not used.
	* @param iModel
	*   The model in which to interprete the values.
	*/
	virtual void				CATDump(int iIndent,int iRecurse,int iLoopSize,
										CATAnalysisExplicitModel* iModel = NULL) const = 0;

   /**
    * Dumps the contents and meta-info of this Space to a list of CATUnicodeString
	* @param oListOfString
	*   The output list of CATUnicodeString
	* @param iIndent
	*   The indent to %apply.
	* @param iRecurse
	*   Not used.
	* @param iLoopSize
	*   Not used.
	* @param iModel
	*   The model in which to interprete the values.
	*/
	virtual void				CATDump(CATListValCATUnicodeString* oListOfString, 
										int iIndent,
										int iRecurse,
										int iLoopSize, CATAnalysisExplicitModel* iModel = NULL) const = 0;

   /**
    * Retrieves the physical type.
	* @param oPhysicalType
	*   The physical type.
	* @return S_OK if physical type found
	*/
    virtual HRESULT				GetPhysicalType(CATSamPhysicalType &oPhysicalType) const = 0 ;

   /**
    * Sets the physical type.
	* @param iPhysicalType
	*   The physical type.
	* @return S_OK if physical type found
	*/
	virtual HRESULT				SetPhysicalType(CATSamPhysicalType iPhysicalType) = 0 ;

   /**
    * Retrieves the Unit String.
	* @param oUnitString
	*   The Unit String.
	* @return S_OK if unit type found
	*/
    virtual HRESULT				GetUnit(CATString &oUnitString) const = 0 ;

   /**
    * Sets the Unit String.
	* @param iUnitString
	*   The Unit String.
	* @return S_OK if unit type found
	*/
	virtual HRESULT				SetUnit(CATString iUnitString) = 0 ;

   /**
    * Reference counting on Spaces : Add a reference
	* @return The current amount of references
    */
	virtual int					AddRef() const = 0;

   /**
    * Reference counting on Spaces : Remove a reference
	* @return The current amount of references
    */
	virtual int					Release() const = 0;

   /**
    * Reference counting on Spaces
	* @return The current amount of references
    */
	inline int					GetReferenceCount() const
									{ return _NumReference; }

   /**
	* Duplicate
	* The result will be a new CATSamISpace object with same behaviour.
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	*/
	virtual CATSamISpace*		Duplicate() const = 0;

   /**
	* GetObjectClassName
	* Gets the Object name, enables to directly cast to a subclass if that Class is known
	*/
	virtual const char*			GetObjectClassName() const = 0;


protected:
	int			_NumReference;

};


#endif
