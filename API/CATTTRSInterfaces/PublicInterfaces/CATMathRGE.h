// COPYRIGHT DASSAULT SYSTEMES 2000

#ifndef CATMathRGE_H
#define CATMathRGE_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMathPoint.h"
#include "CATMathLine.h"
#include "CATMathPlane.h"
#include "CATMmrTTRSClass.h"
#include "CATTTRSClass.h"
#include "CATTTRSItf.h"

		
/**
 * Class representing the mathematical properties of RGEs (TTRS).
 * <b>Role</b>:
 * CATMathRGE is derived into six specialized classes:
 * <ol>
 *  <li>@href CATMathSphericalRGE made up of a @href CATMathPoint </li>
 *  <li>@href CATMathPlanarRGE made up of a @href CATMathPlane </li>
 *  <li>@href CATMathCylindricalRGE made up of a @href CATMathLine </li>
 *  <li>@href CATMathRevoluteRGE made up of a @href CATMathPoint and a @href CATMathLine </li>
 *  <li>@href CATMathPrismaticRGE made up of a @href CATMathLine and a @href CATMathPlane </li>
 *  <li>@href CATMathComplexRGE made up of a @href CATMathPoint, a @href CATMathLine and a @href CATMathPlane </li>
 * </ol>
 */
class ExportedByCATTTRSItf CATMathRGE
{
public :
/**
 * Default constructor.
 * Do not use. Preferably instantiate derived classes.
 */
	CATMathRGE(); 

/**
 * Returns the TTRS class associated with the RGE.
 */
	virtual CATMmrTTRSClass GetTTRSclass() const;
/**
 * Returns the TTRS class associated with the RGE.
 */
  virtual CATTTRSClass GetTTRSClass () const;
/**
 * Retrieves the point making up the RGE.
 * <br><b>Role</b>: If the RGE is made up of a point, the derived class
 * redefines this method to supply the point.
 * Otherwise, no point makes up the RGE, and this
 * method returns E_FAIL.
 * @param ioMathPoint
 *   The retrieved point
 * @return E_FAIL 
 *   Returns always E_FAIL
 */
	virtual HRESULT GetMathPoint(CATMathPoint & ioMathPoint);
/**
 * Retrieves the line making up the RGE.
 * <br><b>Role</b>: If the RGE is made up of a line, the derived class
 * redefines this method to supply the line.
 * Otherwise, no line makes up the RGE, and this
 * method returns E_FAIL.
 * @param ioMathLine
 *   The retrieved line
 * @return E_FAIL 
 *   Returns always E_FAIL
 */
	virtual HRESULT GetMathLine(CATMathLine & ioMathLine);
/**
 * Retrieves the plane making up the RGE.
 * <br><b>Role</b>: If the RGE is made up of a plane, the derived class
 * redefines this method to supply the plane.
 * Otherwise, no plane makes up the RGE, and this
 * method returns E_FAIL.
 * @param ioMathPlane
 *   The retrieved plane
 * @return E_FAIL 
 *   Returns always E_FAIL
 */
	virtual HRESULT GetMathPlane(CATMathPlane & ioMathPlane);
};



/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Spherical.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathSphericalRGE : public CATMathRGE
{
public:
/**
 * Constructs a Spherical RGE using a point.
 * @param iMathPoint
 *   The point making up the Spherical RGE
 */
	CATMathSphericalRGE(const CATMathPoint & iMathPoint);
/**
 * Returns the TTRS class associated with the Spherical RGE.
 */
	CATMmrTTRSClass GetTTRSclass() const { return CATMmrSphericalTTRSClass; };
/**
 * Returns the TTRS class associated with the Spherical RGE.
 */
	CATTTRSClass GetTTRSClass () const { return Spherical; };
/**
 * Retrieves the point making up the Spherical RGE.
 * @param ioMathPoint
 *   The retrieved point
 * @return S_OK 
 *   Returns always S_OK, even if a null point makes up the RGE
 */
  HRESULT GetMathPoint(CATMathPoint & ioMathPoint);
/**
 * The point that makes up the Spherical RGE.
 */
	CATMathPoint _math_point;
};




/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Planar.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathPlanarRGE : public CATMathRGE
{
public:
/**
 * Constructs a Planar RGE using a plane.
 * @param iMathPlane
 *   The plane making up the Planar RGE
 */
	CATMathPlanarRGE(CATMathPlane & iMathPlane);

/**
 * Returns the TTRS class associated with the Planar RGE.
 */
	CATMmrTTRSClass GetTTRSclass() const { return CATMmrPlanarTTRSClass; };
/**
 * Returns the TTRS class associated with the Planar RGE.
 */
  CATTTRSClass GetTTRSClass () const { return Planar; };
/**
 * Retrieves the plane making up the Planar RGE.
 * @param ioMathPlane
 *   The retrieved plane
 * @return S_OK 
 *   Returns always S_OK, even if a null plane is associated with the RGE
 */
  HRESULT GetMathPlane(CATMathPlane & ioMathPlane);
/**
 * The point that makes up the Planar RGE.
 */
	CATMathPlane _math_plane;
};





/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Cylindrical.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathCylindricalRGE : public CATMathRGE
{
public :
/**
 * Constructs a Cylindrical RGE using a line.
 * @param iMathLine
 *   The line making up the Cylindrical RGE
 */
	CATMathCylindricalRGE(CATMathLine & iMathLine);

/**
 * Returns the TTRS class associated with the Cylindrical RGE.
 */
	CATMmrTTRSClass GetTTRSclass()  const { return CATMmrCylindricalTTRSClass;};
/**
 * Returns the TTRS class associated with the Cylindrical RGE.
 */
  CATTTRSClass GetTTRSClass () const { return Cylindrical; };
/**
 * Retrieves the line making up the Cylindrical RGE.
 * @param ioMathLine
 *   The retrieved line
 * @return S_OK 
 *   Returns always S_OK, even if a null line is associated with the RGE
 */
  HRESULT GetMathLine(CATMathLine & ioMathLine);
    
/**
 * The line that makes up the Cylindrical RGE.
 */
	CATMathLine _math_line;
};



/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Revolute.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathRevoluteRGE : public CATMathRGE
{
public:
/**
 * Constructs a Revolute RGE using a point and a line.
 * @param iMathPoint
 *   The point making up the Revolute RGE
 * @param iMathLine
 *   The line making up the Revolute RGE
 */
	CATMathRevoluteRGE(CATMathPoint & iMathPoint, CATMathLine & iMathLine);

/**
 * Returns the TTRS class associated with the Revolute RGE.
 */
	CATMmrTTRSClass GetTTRSclass() const { return CATMmrRevoluteTTRSClass; };
/**
 * Returns the TTRS class associated with the Revolute RGE.
 */
	CATTTRSClass GetTTRSClass () const { return Revolute; };
/**
 * Retrieves the point making up the Revolute RGE.
 * @param ioMathPoint
 *   The retrieved point
 * @return S_OK 
 *   Returns always S_OK, even if a null point is associated with the RGE
 */
  HRESULT GetMathPoint(CATMathPoint & ioMathPoint);
/**
 * Retrieves the line making up the Revolute RGE.
 * @param ioMathLine
 *   The retrieved line
 * @return S_OK 
 *   Returns always S_OK, even if a null line is associated with the RGE
 */	HRESULT GetMathLine(CATMathLine & ioMathLine);
/**
 * The point that makes up the Revolute RGE.
 */
	CATMathPoint _math_point;
/**
 * The line that makes up the Revolute RGE.
 */
	CATMathLine _math_line;
};


/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Prismatic.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathPrismaticRGE : public CATMathRGE
{
public:
/**
 * Constructs a Prismatic RGE using a line and a plane.
 * @param iMathLine
 *   The line making up the Prismatic RGE
 * @param iMathPlane
 *   The plane making up the Prismatic RGE
 */
	CATMathPrismaticRGE(CATMathLine & iMathLine, CATMathPlane & iMathPlane);

/**
 * Returns the TTRS class associated with the Prismatic RGE.
 */
	CATMmrTTRSClass GetTTRSclass() const { return CATMmrPrismaticTTRSClass ;};
/**
 * Returns the TTRS class associated with the Prismatic RGE.
 */
	CATTTRSClass GetTTRSClass () const { return Prismatic; };
/**
 * Retrieves the line making up the Prismatic RGE.
 * @param ioMathLine
 *   The retrieved line
 * @return S_OK 
 *   Returns always S_OK, even if a null line is associated with the RGE
 */
  HRESULT GetMathLine(CATMathLine & ioMathLine);
/**
 * Retrieves the plane making up the Prismatic RGE.
 * @param ioMathPlane
 *   The retrieved plane
 * @return S_OK 
 *   Returns always S_OK, even if a null plane is associated with the RGE
 */
	HRESULT GetMathPlane(CATMathPlane & ioMathPlane);
/**
 * The line that makes up the Prismatic RGE.
 */	CATMathLine _math_line;
/**
 * The plane that makes up the Prismatic RGE.
 */
	CATMathPlane _math_plane;
};



/**
 * Class representing the mathematical properties of an RGE whose TTRS class is Complex.
 * Overrides @href CATMathRGE.
 */
class ExportedByCATTTRSItf CATMathComplexRGE : public CATMathRGE
{
public:
/**
 * Constructs a Complex RGE using a point, a line, and a plane.
 * @param iMathPoint
 *   The point making up the Complex RGE
 * @param iMathLine
 *   The line making up the Complex RGE
 * @param iMathPlane
 *   The plane making up the Complex RGE
 */
	CATMathComplexRGE(CATMathPoint & iMathPoint, CATMathLine & iMathLine, CATMathPlane & iMathPlane);

/**
 * Returns the TTRS class associated with the Complex RGE.
 */
	CATMmrTTRSClass GetTTRSclass() const { return CATMmrComplexTTRSClass; };
/**
 * Returns the TTRS class associated with the Complex RGE.
 */
	CATTTRSClass GetTTRSClass () const { return TTRSComplex; };
/**
 * Retrieves the point making up the Complex RGE.
 * @param ioMathPoint
 *   The retrieved point
 * @return S_OK 
 *   Returns always S_OK, even if a null point is associated with the RGE
 */
  HRESULT GetMathPoint(CATMathPoint & ioMathPoint);
/**
 * Retrieves the line making up the Complex RGE.
 * @param ioMathLine
 *   The retrieved line
 * @return S_OK 
 *   Returns always S_OK, even if a null line is associated with the RGE
 */
	HRESULT GetMathLine(CATMathLine & ioMathLine);
/**
 * Retrieves the plane making up the Complex RGE.
 * @param ioMathPlane
 *   The retrieved plane
 * @return S_OK 
 *   Returns always S_OK, even if a null plane is associated with the RGE
 */
	HRESULT GetMathPlane(CATMathPlane & ioMathPlane);

/**
 * The point that makes up the Complex RGE.
 */
	CATMathPoint _math_point;
/**
 * The line that makes up the Complex RGE.
 */
  CATMathLine _math_line;
/**
 * The plane that makes up the Complex RGE.
 */
	CATMathPlane _math_plane;
};

#endif
