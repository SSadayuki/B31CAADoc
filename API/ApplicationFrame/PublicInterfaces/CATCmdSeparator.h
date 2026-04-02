#ifndef CATCmdSeparator_H
#define CATCmdSeparator_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0FRAME.h"
#include "CATCmdAccess.h"

/**
 * Class to create a separator's access .
 * <b>Role</b>: Application Frame elementary component used to separate other
 * components visually (line in a submenu, blank in a toolbar). Use the @href NewAccess 
 * macro to create a <tt>CATCmdSeparator</tt>
 */
class ExportedByCD0FRAME CATCmdSeparator: public CATCmdAccess
{
  friend class CATMarshallableCmdSeparator;
  
  CATDeclareKindOf;
  
public:

	/*---------------------------------*/
    //     CONSTRUCTORS  
    /*---------------------------------*/
  /**
  * @nodoc
  */
  CATCmdSeparator (Persistence = Code);
  /**
  * @nodoc
  */
  CATCmdSeparator (const CATString &name, Persistence = Code);
  /**
  * @nodoc
  */
  CATCmdSeparator (CATCmdSeparator &);
  
  /**
  * @nodoc
  */
  virtual CATCmdAccess * Clone(int noNext = 0,CATCmdAccess * toBeCompleted = NULL);
			       
  
  virtual ~CATCmdSeparator();
 
    /*---------------------------------*/
    //  SAVE
    /*---------------------------------*/
#ifdef AfrCAA2

  /**
  * @nodoc
  */
  virtual void SaveAsXml (CATAfrGen * Gen, int depth);
#endif


    /*---------------------------------*/
    //  INTERNAL USAGE 
    /*---------------------------------*/

  /** @nodoc */
  virtual char *GenerateVariableName(const char *);

    /*---------------------------------*/
    //     REPRESENTATION  
    /*---------------------------------*/

  /** @nodoc */
  virtual CATCmdRep * CreateMenuRep (CATDialog *);
  /** @nodoc */
  virtual void        DestroyMenuRep();
  
  /** @nodoc */
  virtual CATCmdRep * CreateToolbarRep (CATDialog *);
  /** @nodoc */
  virtual void        DestroyToolbarRep();

  /** @nodoc */
  virtual void CreateToolbarVisRep(CATVisDialog* parentVisRep);

  /** @nodoc */
  virtual void DestroyToolbarVisRep();
  
  /** @nodoc */
  virtual CATCmdRep * CreateCtxMenuRep (CATDialog *);
  /** @nodoc */
  virtual void        DestroyCtxMenuRep();


};

#endif
