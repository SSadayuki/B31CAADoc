// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATAnalysisEntityCollector
//
//=============================================================================
// Usage Notes: manipulation of collector entities
//=============================================================================
#ifndef CATAnalysisEntityCollector_H_
#define CATAnalysisEntityCollector_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATSAM0Explicit.h"
#include "CATAnalysisCollectorRoot.h"

class CATAnalysisExplicitModel;
class CATAnalysisCharacCollector;
class CATLISTP(CATAnalysisEntityCollector);

/**
 * Field model Object to extract finite element entities.
 * This object can be considered as a CharacCollector whitout values.
 * It represents a collection of finite element support defined as a CATSamValue and a Position string.
 * It is used as the result of CATISamGroup interface.
 */

class ExportedByCATSAM0Explicit CATAnalysisEntityCollector : public CATAnalysisCollectorRoot
{
  public:
/**
 * Default constructor.
 */
    CATAnalysisEntityCollector() ;

/**
 * Copy constructor.
 */
    CATAnalysisEntityCollector(const CATAnalysisEntityCollector & iEntityCollector) ;

/**
 * Destructor.
 */
    virtual ~CATAnalysisEntityCollector() ;
  
/**
 * Assignement operator.
 */
    CATAnalysisEntityCollector& operator = (const CATAnalysisEntityCollector & iEntityCollector);

/**
 * Assignement operator.
 */
    CATAnalysisEntityCollector& operator = (const CATAnalysisCharacCollector* iCharacCollector) ;

/**
 * Binary operations (And).<br>
 */
    CATAnalysisEntityCollector& operator&(const CATAnalysisEntityCollector &iEntiyCollector) ;

/**
 * Binary operations (Or).<br>
 */
    CATAnalysisEntityCollector& operator|(const CATAnalysisEntityCollector &iEntiyCollector) ;

/**
 * Binary operations (exclusive Or).<br>
 */
    CATAnalysisEntityCollector& operator^(const CATAnalysisEntityCollector &iEntiyCollector) ;

/**
 * Binary operations (Substraction).<br>
 */
    CATAnalysisEntityCollector& operator-(const CATAnalysisEntityCollector &iEntiyCollector) ;

/**
 * Comparison of two EntityCollectors.
 * @param iEntityCollector the Collector to compare to.
 */
    CATBoolean operator==(const CATAnalysisEntityCollector & iEntityCollector)const;

/**
 * Comparison of two EntityCollectors.
 * @param iEntityCollector the Collector to compare to.
 */
    CATBoolean operator!=(const CATAnalysisEntityCollector & iEntityCollector)const;

/**
 * Returns the EntityCollector definition.
 * @param oValue The category of collected objects.
 * @see CATSamValue 
 * @param oPosition Position type on collected objects.
 */
    HRESULT GetDefinition(CATSamValue & oValue, CATString& oPosition) const ;

/**
 * Assigns all the information defining the EntityCollector.
 * @param iValue The category of collected objects.
 * @see CATSamValue
 * @param iPosition Position type on collected objects.
 */
    HRESULT SetDefinition(CATSamValue iValue, CATString iPosition) ;

/**
 * Obtains the entities contained in the EntityCollector.
 * @param oNbExplicitPointers
 *   Size of oExplicitPointers.
 * @param oExplicitPointers[oNbExplicitPointers]
 *   A pointer to the table of pointers to the entities which are in the collection.
 * @param oPositions[oNbExplicitPointers]
 *   A pointer to the table of position per entities which are in the collection.
 */
    HRESULT GetExplicitPointers(int & oNbExplicitPointers, const CATSamExplicitPtr* & oExplicitPointers, const int* & oPositions) const;
  
/**
 * Assigns the entities contained in the EntityCollector.
 * @param iNbExplicitPointers
 *   Size of iExplicitPointers.
 * @param iExplicitPointers[iNbExplicitPointers]
 *   A pointer to the table of pointers to the entities which are in the collection.<br>
 *   A copy of the contents of the table will be made.
 * @param oPositions[oNbExplicitPointers]
 *   A pointer to the table of position per entities which are in the collection.<br>
 *   This pointer can be NULL, it means that all entities have the same position equal to 0.<br>
 *   A copy of the contents of the table will be made.
 */
   HRESULT SetExplicitPointers(int iNbExplicitPointers, const CATSamExplicitPtr* iExplicitPointers, const int* iPositions = NULL) ;
  
/**
 * Obtains the position information per entity.
 * @param oPositionsSize[_NbEntities]
 *   A pointer to the table of Number of Positions per Entity.
 * @param oPositionsPointers[_NbEntities]
 *   A pointer to the table of Pointers to the Positions List.
 * Both oPositionsSize and oPositionsPointers can be NULL, in this case each entite have the same position (0).
 */
    HRESULT	GetPositionsPointers(const int* & oPositionsSize, const int* const* & oPositionsPointers) const;

/**
 * Compares all the information defining the collector characteristic with
 * another definition.
 * @param iValue
 *   The CATSamValue.
 * @param iPosition
 *   The CATPositon.
 */
    CATBoolean CompareDefinition(const CATSamValue& iValue,const CATString& iPosition) const;


/**
 * Dumps the contents of the entity collector.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    virtual void Dump(CATListValCATUnicodeString* oListOfString, 
                      int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;

/**
 * Dumps the contents of the collector.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const;


  private:
    // Friend Class for Private Methods
    friend class CATAnalysisCollectorServices;

    // Reset
    HRESULT Reset();
    // GetEntitiesFlags
    HRESULT GetEntitiesFLags() const;
    // SortExplicitPointers
    HRESULT SortExplicitPointers();
    // SetExplicitPointers
    HRESULT SetExplicitPointers(int iNbExplicitPointers, const CATSamExplicitPtr* iExplicitPointers, const int* iPositions, CATBoolean iCheckPointers) ;
    // CollectorOperators
    HRESULT CollectorOperators(const CATAnalysisEntityCollector &iEntityCollector, int iOperatorType);
    // Convert the model in which the collector will be defined.
    // This is usefull only for the EntityFlags access.
    // @param iModel  : The explicit model to be taken into account.
    // @return The new entity collector.
    CATAnalysisEntityCollector* ConvertCollector(const CATAnalysisExplicitModel*  iModel) const ;

  protected:
/**
 * Datas Members
 */
    CATSamValue        _Value ;
    int*               _Positions;
    int*               _PositionsSize;
    int**              _PositionsPointers;
    int                _NbExplicitPointers;

    CATSamExplicitPtr* _ExplicitPointers;
} ;
#endif
