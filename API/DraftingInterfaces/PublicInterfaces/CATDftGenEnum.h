// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATDftGenEnum_H
#define CATDftGenEnum_H
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */
class CATBody;
class CATMathTransformation;


/**
* Defines options for temporary geometry generation.
*/
enum DftGenTmpGeomOption
{
    DftGenNoOption          = 0,
	DftGenNotRepresented    = 1,
	DftGenProvenance        = 2,
	DftGenTransparent       = 4,
    DftGenOneJournal        = 8
};

/**
* Equality Status between 2 Symbolic Representations.
*/
enum DftGenSRCompareStatus
{
	DftGenSREquals              = 0,
	DftGenSRMustReplace         = 1,
	DftGenSRMustBeReplaced      = 2
};

enum DftGenUpdatableStatus
{
    DftGenNotUpdatable  = 0,
    DftGenUpdatable     = 1
};

enum DftGenConnectionStatus
{
    DftGenNotConnectable    = 0,
    DftGenConnectableOn     = 1,
    DftGenConnectableNear   = 2
};

#endif
