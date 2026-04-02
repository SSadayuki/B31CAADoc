#ifndef CATIDftElementWithLeader_H
#define CATIDftElementWithLeader_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATBooleanDef.h"

class CATIDftLeader;

#include "CATSymbolType.h"
#include "CATDftLeaderParameters.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftElementWithLeader ;
#else
extern "C" const IID IID_CATIDftElementWithLeader ;
#endif

/**
* Interface on Leader list management.
* @see CATIDftLeader
*/
class ExportedByDraftingItfCPP CATIDftElementWithLeader : public IUnknown
{
  
public:
  
  /**
  *  Returns the number of leader on the element.
  * @param oNbLeader
  *   The number of leader on the element.
  */
  virtual HRESULT GetNbLeader (int *oNbLeader) = 0;

  /**
  * Returns a particular leader.
  * @param iNoLeader
  *   The rank of the leader. Start to 1 to number of leader returned by GetNbLeader method.
  * @param oLeader
  *   A pointer on the leader.
  */
  virtual HRESULT GetLeader (int iNoLeader,CATIDftLeader **oLeader) = 0;
  
  /**
  * Add a leader to the element.
  * @param iAnchorOnElement
  *   The rank of the point in the list returned by GetAnchorPoints
  * @param iEndPoint
  *   The point of the arrow
  * @param oLeader
  *   A pointer on the leader added.
  * @param iSymbolType
  *   The type of the symbol (can be automaticly overriden by some annotations)
  */
  virtual HRESULT AddLeader (int iAnchorOnElement,const double iEndPoint[2],
                             CATIDftLeader **oLeader,
                             SymbolType iSymbolType = NOTUSED) = 0;

  /**
  * Removes a leader.
  * @param iNoLeader
  *   Rank of leader to delete. If <tt>iNoLeader</tt> is equal to -1, all leaders will
  *   be deleted.
  */
  virtual HRESULT RemoveLeader (int iNoLeader) = 0;
  
  /**
  * Returns all possible anchor points for leaders on the element.
  * @param oNbPoints
  *   Number of possible points to anchor leader.
  * @param oPointListe
  *   Liste of points, X1,Y1,X2,Y2,...
  * @param oPointIsValid
  *   Liste of usable points rank in the previous list.
  * @param oDeltaListe
  *   Liste of delta for anchor point
  */
  virtual HRESULT GetAnchorPoints ( int *oNbPoints,double **oPointListe,
                                    int **oPointIsValid, double **oDeltaListe) = 0;
  /**
  * Returns the position of a particular anchor point for leader.
  * @param iNoPoints
  *  Rank of the point in the possible list of anchor point. The list start to 1 to number 
  *  of points returned by GetAnchorPoints method.
  * @param oPoint
  *   The point.
  */
  virtual HRESULT GetAnchorPoint (int iNoPoint,double oPoint [2]) = 0;
  
  /**
  * Set the visualization mode for leaders.
  * @param ShowMode
  *   if ShowMode = 0, leaders won't be visible.
  */
  virtual HRESULT SetLeadersVisualization (int iShowMode) = 0;

  /**
  * Returns the visualization mode.
  * @param ShowMode
  *   if ShowMode = 0, leaders aren't visible.
  */
  virtual HRESULT GetLeadersVisualization (int *oShowMode) = 0;
  

  /**
  * Set the standard obligation.
  * @param iStd
  *   if iStd = TRUE  ->  the leader anchor point will respect the current standard 
  *                   (either ISO/JIS/ANSI)
  *   if iStd = FALSE -> the leader anchor point doeas not respect any standard
  */
  virtual HRESULT SetStandardBehavior(const boolean iStd) = 0;

  /**
  * Returns the standard obligation.
  * @param oStd
  *   if oStd = TRUE  ->  the leader anchor point will respect the current standard 
  *                   (either ISO/JIS/ANSI)
  *   if oStd = FALSE -> the leader anchor point doeas not respect any standard
  */
  virtual HRESULT GetStandardBehavior(boolean * oStd) = 0;
  
  /**
  * Set the leader anchor delta without view scale.
  * @param iDelta
  */
  virtual HRESULT SetAnchorDelta(const int iNoLeader, const double iDelta) = 0;

  /**
  * Get the leader anchor delta without view scale.
  * @param oDelta
  */
  virtual HRESULT GetAnchorDelta(const int iNoLeader, double * oDelta) = 0;

  /**
  * Slide the text along its leaders.
  * @param iDeltaX
  * @param iDeltaY
  */
  virtual HRESULT SlideAlongLeader(const double iDeltaX, const double iDeltaY) = 0;

  /**
  * @nodoc
  * Set the Anchor symbol.
  * @param iSymbol
  */
  virtual HRESULT SetAnchorSymbol(const DftAnchorSymbol iSymbol) = 0;

  /**
  * @nodoc
  * Returns a DftAnchorSymbol.
  * @param oSymbol
  */
  virtual HRESULT GetAnchorSymbol(DftAnchorSymbol * oSymbol) = 0;

  /**
  * @nodoc
  * On construction : IUnknown should be replace by CATIDftLineicProperties.
  * Returns a graphic interface to modify all leaders on the element.
  * @param oLineProperties
  *   A pointer to the interface.
  */
  
  virtual HRESULT GetLineProperties (IUnknown **oLineProperties) = 0;

  /**
  * @nodoc
  * Returns an interface to modify all leaders on the element.
  * @param iSubSet
  *   can be "All","Symbols","Lines"
  * @param iItfName
  *   An ID on the interface to find.
  * @param oSubset
  *   A pointer to the interface.
  */
  virtual HRESULT GetSubSet (const wchar_t *iSubSet,
                             const IID iItfName,
                             IUnknown **oSubset) = 0;
};
#endif
