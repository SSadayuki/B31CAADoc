#ifndef CATVizBasePathElementRep_h
#define CATVizBasePathElementRep_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CAT3DRep.h"
#include "CATRepPath.h"
#include "CATMutex.h"

class CATRender;
class CATModelIdentificator;
class CATSupportAlgoFactory;

/**
  * Class .
  *
  */
class ExportedByCATViz CATVizBasePathElementRep : public CAT3DRep
{

  friend class CATSupportAlgoFactory;
  /** @nodoc */
  CATDeclareClass;
public:
    
  /** @nodoc */
  CATVizBasePathElementRep(CATRepPath *iPathOfRep, int iForHighlight = 1);

  /** @nodoc */
  CATVizBasePathElementRep(const CATVizBasePathElementRep &iRep);

  virtual ~CATVizBasePathElementRep();
	 
  /** @nodoc */
  virtual void Draw          (CATRender &,int); 
  /** @nodoc */
  virtual void DrawShading( CATRender &, int);

  /** @nodoc */
  CATRepPath & GetRepPath() ;

  /** @nodoc */
  void GetRepPath(CATRepPath *&oPath);
    
  /** @nodoc */
  void SetInvalidDraw();
   

  protected:

/**
 * Methode de mise a jour du reppath stocke dans _path.
 * Cette methode doit etre imperativement implementee par les classes derivee.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> _path a bien ete regenere.
 * <dt> <tt>E_FAIL</tt>   <dd> La regeneration a echoue.
 * </dl>
 */
    virtual HRESULT UpdateRepPath( void );

  /** @nodoc */
  CATRepPath* _path;

  private:
  static CATMutex _mutexPathElementRep;
  int _invalidDraw;
  int _forHighlight;
};

#endif 
