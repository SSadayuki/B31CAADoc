#ifndef CATCke_h
#define CATCke_h


// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U1 
 */

// include module definition
#include "KnowledgeItf.h"
#include "CATUnicodeString.h"
#include "CATICkeForwards.h"

class CORBAAny;

/**   
 *  Class used as a namespace. 
 *  <b>Role</b>: namespace.<br>
 */
class ExportedByKnowledgeItf CATCke
{

public:

// types
#include "CATCkeDataTypes.h"

  CATCke () {}
  CATCke (const CATCke&) {}
  virtual ~CATCke() ;

   /**
   * @nodoc
   */ 
   static CATUnicodeChar encadreKanji_;
   /**
   * @nodoc
   */ 
   static CATUnicodeString EMPTYSTRING;
};

#endif

