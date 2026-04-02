// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitData
//
//=============================================================================
//
// Usage Notes: General services linked to the field model objects
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitData_H_
#define CATAnalysisExplicitData_H_

#include "CATSAM0Explicit.h"

#include "CATAnalysisExplicitModel.h"
#include "CATSamModelRootMacro.h"
#include "CATAssert.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
*/

class CATSamModelRoot;
class CATSamModelDataRoot;
class CATSamModelList;
class Handler(CATSamModelRoot);
class Handler(CATSamModelDataRoot);
class Handler(CATSamModelList);

/** @nodoc */
typedef CATSamModelDataRoot* CATSamExplicitPtr;

/**
 * This object is used to provide basic services for the field model.<br>
 * It is an interface to the field model objects and does not contain any data.<br>
 * The static variable <b>NULL_exp</b> is the equivalent of a NULL pointer.
 * @see CATAnalysisExplicitModel
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitData
{
   friend class CATAnalysisExplicitModel ;

   friend class CATAnalysisExplicitList ;
   friend class CATAnalysisExplicitListATo ;
   friend class CATAnalysisExplicitListABy ;
   friend class CATAnalysisExplicitListUsr ;

   friend class CATAnalysisExplicitChild ;
   friend class CATAnalysisExplicitParent ;
   friend class CATAnalysisExplicitCharac ;
   friend class CATAnalysisExplicitEntity  ;
   friend class CATAnalysisExplicitSet  ;
   friend class CATAnalysisExplicitNode ;
   friend class CATAnalysisExplicitElement ;

   friend class CATAnalysisExplicitSearch  ;
   friend class CATSamModelListIterator;

   private :
      const CATAnalysisExplicitData *operator&(void) const ;
   
   protected :
     union {
       CATSamModelDataRoot *_DataRoot ; // A Pointer on a DataRoot
       CATSamModelList     *_ListRoot ; // A Pointer on a List
     }_Data ;
     CATAnalysisExplicitModel      *_Model ;
     CATAnalysisExplicitModel      *_ContextModel ;
     CATSamDataType                 _DataType ;            
     
    /**
    * You should use the methods with the handlers.
    */
      CATSamExplicitPtr GetDataPointer() const ;     
      HRESULT GetDataRootHandler(Handler(CATSamModelDataRoot) &oDataPointer) const ; 
      HRESULT GetListHandler(Handler(CATSamModelList) &oListPointer) const ;
      
    /**
    * Dump the information on this data.
    */
      HRESULT Dump(int indent, int recurse, char * const &ioBuffer, int &oNbString, char** &oTabString) const;

      virtual void    Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;
  
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitData() ;

/**
 * Destructor.
 */
      virtual ~CATAnalysisExplicitData() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitData(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitData &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Equality operator. Used to check if 2 <b>CATAnalysisExplicitData</b> objects
 * point to the same field model objects.
 */
      CATBoolean operator == (const CATAnalysisExplicitData &iData) const ;

/**
 * Inequality operator. Used to check if 2 <b>CATAnalysisExplicitData</b> objects
 * point to different field model objects.
 */
      CATBoolean operator != (const CATAnalysisExplicitData &iData) const ;

/**
 * Dumps of the field model object.<br>
 * This dump is sent to stdout if the <tt>SAMTraceExpli</tt> trace is activated.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The recursion depth of the dump.<br>
 *   If > 0, then the recursion is through the children list and the characteristic contents.<br>
 *   If < 0, then the recursion is through the apply-to list.
 */
      void Dump(int iIndent = 0, int iRecurse = 0) const ;

/**
 * Dumps of the field model object.
 * @param oNbString
 *   The number of String generated.
 * @param oTabString
 *   The array of String generated.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The recursion depth of the dump.<br>
 *   If > 0, then the recursion is through the children list and the characteristic contents.<br>
 *   If < 0, then the recursion is through the apply-to list.
 */
      virtual void Dump(int &oNbString, char** &oTabString, int iIndent = 0, int iRecurse = 0) const ;

/**
 * Returns the type of the field model object.
 * <br> Inline Method. <br>
 * @see CATSamDataType
 */
      CATSamDataType GetType() const ;

/**
 * Returns a pointer to the field model in which the object is created.
 * <br> Inline Method. <br>
 * @see CATAnalysisExplicitModel
 */
      CATAnalysisExplicitModel *GetModel() const ;

/**
 * Returns a pointer to the assembly field model in which the object is used. 
 * To get an explicit object using @href CATAnalysisExplicitChild#LinkWithPointer, you can
 * <ul>
 * <li> Set the explicit model to NULL or the model used for object creation, GetContextModel will return as GetModel. </li>
 * <li> Set the explicit model to another model that reference the model used for object creation, GetContextModel will return this new explicit model . </li></ul>
 * <br> Inline Method. <br>
 * @see CATAnalysisExplicitModel
 */
      CATAnalysisExplicitModel *GetContextModel() const ;
} ;

/**
 * @nodoc
 * The equivalent of a NULL pointer.
 */
extern ExportedByCATSAM0Explicit const CATAnalysisExplicitData NULL_exp ;

/**
 * Inline Functions Declaration.
 */
inline CATSamExplicitPtr CATAnalysisExplicitData::GetDataPointer() const { CATAssert(_Data._DataRoot); return _Data._DataRoot; }

inline CATSamDataType CATAnalysisExplicitData::GetType() const { return _DataType ;}

inline CATAnalysisExplicitModel *CATAnalysisExplicitData::GetModel() const {return _Model ;}

inline CATAnalysisExplicitModel *CATAnalysisExplicitData::GetContextModel() const { return _ContextModel ;}

#endif
