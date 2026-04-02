// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIExpression
//
//=============================================================================
//
// Usage Notes: Main Expression Interface
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIExpression_H_
#define CATSamIExpression_H_

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"

#include "CATSamI1DSpace.h"
#include "CATSamISpace.h"
#include "IUnknown.h"

#include "CATSam1DSpaceList.h"
#include "CATSamSpaceList.h"

class CATSamStream ;

/**
 * Main Expression interface.
 * Can respresent values in an n-dimensional space.
 * Reminder : use RequestDelayedDestruction in order to ask for further destruction of the pointer.
 */
class ExportedByCATSamExpression CATSamIExpression
{
public:

   /**
	* Destructor
	*/
	virtual ~CATSamIExpression();


   /**
	* @return The dimension
	*/
	virtual unsigned int						GetDimension() const = 0;

   /**
	* Returns the first argument 1D Space for a certain dimension
	* @param iIndex the dimension where to get the argument 1D Space from.
	* @return The <b>first</b> argument for dimension iIndex. Use GetArgumentList for getting all argument spaces for a certain dimension.
	*/
	virtual const CATSamI1DSpace*				GetArgument( unsigned int iIndex ) const = 0;

   /**
	* Returns the list of argument 1D Spaces for a certain dimension
	* @param iIndex the dimension where to get the argument 1D Space list from.
	* @return The <b>list</b> of 1D Spaces arguments for dimension iIndex.
	*/
	virtual void								GetArgumentList( unsigned int iIndex, const CATSam1DSpaceList* & oArgument1DSpaceList ) const = 0;

   /**
   * The amount of resultspaces
   * @return The number.
   */
	virtual unsigned int						GetAmountOfResultSpaces() const = 0;

   /**
   * Returns the list of result spaces
	* @param oResultSpaceList const list of CATSamISpace
	* @param oLength length of the list
	* @return const list of CATSamISpace
   */
	virtual void								GetResultSpacesList( const CATSamSpaceList* & oResultSpaceList ) const = 0;

   /**
   * To set the dimension of the expression
	* @param iDimension The requested dimension
	* @return S_OK if succeeded, E_FAIL if failed (e.g. Reference counting > 1).
   */
	virtual HRESULT								SetDimension(unsigned int iDimension) = 0;

   /**
   * Adds an argument 1D Space
	* @param iIndex : which dimension you want to add the Space to.
	* @param iArgument1DSpace : the Space
	* @param iArgumentName : the role of this argument in the Expression
	* @return S_OK if succeeded, E_FAIL if failed (e.g. Reference counting > 1).
   */
	virtual HRESULT								AddArgument1DSpace( unsigned int iIndex, const CATSamI1DSpace* iArgument1DSpace, const CATUnicodeString& iArgumentName = CATUnicodeString("")) = 0;

   /**
   * Adds a result
	* @param iResultSpace the result
	* @return S_OK if succeeded, E_FAIL if failed (e.g. Reference counting > 1).
   */
	virtual HRESULT								AddResultSpace( const CATSamISpace* iResultSpace ) = 0;

   /**
   * Reference counting on Expressions : Add a reference
	* @return The current amount of references
   */
	virtual int									AddRef() const = 0;

   /**
   * Reference counting on Expressions : Remove a reference
	* @return The current amount of references
   */
	virtual int									Release() const = 0;

   /**
   * Reference counting on Expressions
	* @return The current amount of references
   */
	inline int									GetReferenceCount() const
													{ return _NumReference; }

   /**
   * Request the destruction/non-destruction of this class when reference counting reaches zero
	* @param iRequestDestruction
   */
	inline void									RequestDelayedDestruction(CATBoolean iRequestDestruction = TRUE)
													{ _IsRequestForDestruction = iRequestDestruction; }

   /**
   * Streaming of this Expression.
	* @param ioStream
	*   The Stream where to write to.
	* @param iVersion
	*   The Version format in which to write.
	* @param iPhase
	*   The phase of streaming do be performed.
	* @return S_OK if succeeded
	*/
	virtual HRESULT              Stream(	CATSamStream &ioStream,
														int           iVersion,
														int           iPhase) { return E_FAIL; }

   /**
   * Unstreaming of this Expression
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
	virtual HRESULT               UnStream(	CATSamStream &iStream, 
															int iVersion,
															int iPhase,
                                             const CATAnalysisExplicitModel *iModel) { return E_FAIL; }

   /**
   * Is this expression streamable in the CATAnalysis document
   * @return true can be streamed, false if not.
   */
	virtual CATBoolean				    IsStreamable() const = 0;

   /**
   * To set an expression to be streamed inside the CATAnalysis document
   * @return S_OK if the expression can be streamed.
   */
	virtual HRESULT								SetStreamable(CATBoolean iIsStreamable = TRUE ) = 0;

   /**
   * Should this expression be completely or partially streamed in the CATAnalysis document ?
   * @return true for a complete stream, false if not.
   */
	virtual CATBoolean				    FullStream() const = 0;

   /**
   * To set the type of stream of an expression inside the CATAnalysis document
   * @return S_OK if the expression can be streamed as requested.
   */
	virtual HRESULT								SetFullStream(CATBoolean iFullStream = FALSE ) = 0;

   /**
   * Dump the contents and meta-info of this Expression to trace SAMTraceExpli
	* @param iIndent
	*   The indent to %apply.
	* @param iRecurse
	*   Not used.
	* @param iLoopSize
	*   Not used.
	* @param iModel
	*   The model in which to interprete the values.
	*/
	virtual void                    CATDump(	int iIndent,
															int iRecurse,
															int iLoopSize,
															CATAnalysisExplicitModel* iModel = NULL) const = 0;

   /**
   * Dumps the contents and meta-info of this Expression to a list of CATUnicodeString
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
	virtual void                   CATDump(	CATListValCATUnicodeString* oListOfString, 
															int iIndent,
															int iRecurse,
															int iLoopSize, 
															CATAnalysisExplicitModel* iModel = NULL) const = 0;

   /**
	* Duplicate
	* The result will be a new CATSamIExpression object with same behaviour.
   * Caller is reponsible for calling Release() on returnvalue if finished usage.
	*/
	virtual CATSamIExpression*					Duplicate() const = 0;

/**
 * Give a public access to the Work field.
 */
    int * const PublicWorkPtr ;

protected:
  /**
	* Constructor
	*/
  CATSamIExpression();

  /**
	* Constructor with fixed dimension
	*/
  CATSamIExpression( unsigned int iDimension );

  /**
	* Constructor with fixed dimension
	*/
  CATSamIExpression( const CATSamIExpression& iExpression );

  // DATA Members
  int           Work ;
	int			      _NumReference;
	CATBoolean		_IsStreamable;
	CATBoolean		_FullStream;
	CATBoolean		_IsAttachedToModel;
	CATBoolean		_IsRequestForDestruction;
};

#endif
