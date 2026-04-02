#ifndef CATFrmPalette_h
#define CATFrmPalette_h
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


// COPYRIGHT DASSAULT SYSTEMES 2002

#include <CD0FRAME.h>
#include <CATCmdContainer.h>

class CATDialog;

class ExportedByCD0FRAME CATFrmPalette : public CATCmdContainer
{
  CATDeclareClass;
  
public:
  
  CATFrmPalette (const CATString & name, Persistence);
  CATFrmPalette (CATFrmPalette &);
  virtual ~CATFrmPalette();

  int FillViews(CATDialog * parent);


private:
  CATFrmPalette ();
  CATFrmPalette & operator =(const CATFrmPalette & palette);
};

#endif
