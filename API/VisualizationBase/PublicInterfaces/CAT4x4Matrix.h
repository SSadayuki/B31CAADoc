#ifndef CAT4x4Matrix_H
#define CAT4x4Matrix_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CATBaseUnknown.h"
#include "CATMathDirectionf.h"
#include "CATMathVectorf.h"
#include "CATMathPointf.h"

class CATMathAxis;
class CATStreamer;

/** Class to create a 3D matrix.
 * <b>Role</b>: This object manages matrix transformations appliables to 3D
 * elements, in the homogeneous coordinate system, enabling so translations 
 * and rotations to be viewed as matrix operations.<br> 
 * The CAT4x4Matrix is commonly used to define the transformation that is to
 * be applied to CAT3DBagRep objects. 
 */
class ExportedByCATViz CAT4x4Matrix : public CATBaseUnknown
{
  
  friend class CATMarshallable4x4Matrix;
  CATDeclareClass;
  
  
  public:
    
    /** Constructs an identity 3D matrix. */
    CAT4x4Matrix (void);

    /** Constructs an 3D matrix from an other 3D matrix. */
    CAT4x4Matrix (const CAT4x4Matrix &);


    /** Constructs a 3D matrix from axis.
     * @param iAxis
     * The axis.
     */
    CAT4x4Matrix (const CATMathAxis &iAxis);

    /** Constructs a 3D matrix from 4 vectors.
     * @param iU
     * The fisrt vector.
     * @param iV
     * The second vector.
     * @param iW
     * The third vector.
     * @param iTra
     * The fourth vector (Translation).
     */
    CAT4x4Matrix (const CATMathVectorf &iU, const CATMathVectorf &iV, const CATMathVectorf &iW, const CATMathVectorf &iTra); 
    
    /** Constructs a 3D translation matrix from a translation vector.
     * @param iTra
     * The translation vector.
     */
    CAT4x4Matrix (const CATMathVectorf &iTra);  

    /** Constructs a 3D matrix from a float array and a translation
     * vector.
     * @param iRot
     * The rotation float array.
     * @param iTra
     * The translation vector.
     */
    CAT4x4Matrix (const float **iRot,                   // 3x3 Rotation matrix
		  const CATMathVectorf &iTra);          // Translation vector

    /** Constructs a 3D matrix from a rotation and angle vector and an invariant
     * point.
     * @param iRot
     * The rotation and angle vector.
     * @param iInv
     * the invariant point.
     */
    CAT4x4Matrix (const CATMathVectorf &iRot,         // Rotation axis and angle
		  const CATMathPointf  &iInv);        // Invariant point

    /** Constructs a 3D matrix from a translation vector, a rotation and angle
     * vector and an invariant point.
     * @param iTra
     * The translation vector.
     * @param iRot
     * The rotation and angle vector.
     * @param iInv
     * the invariant point.
     */
    CAT4x4Matrix (const CATMathVectorf &iTra,         // Translation vector
		  const CATMathVectorf &iRot,         // Rotation axis and angle
		  const CATMathPointf  &iInv);        // Invariant point

    /** Destructor. */
    virtual ~CAT4x4Matrix (void);

    /** @nodoc
     * Streaming
     */
    virtual void Stream(CATStreamer& str,int savetype=0);

    /** @nodoc
     * Unstreaming
     */
    virtual void UnStream(CATStreamer& str);
    
    /**
     * Multiplication assignment operator.
     * @param iMatrix
     *   The matrix to multiply with the current one
     * @return
     *   The matrix resulting from the multiplication
     */
    CAT4x4Matrix & operator *= (const CAT4x4Matrix & iMatrix);

    /**
     * Assignment operator.
     * @param iMatrix
     *   The matrix to assign to the current one
     * @return 
     *   The matrix resulting from the assignment
     */
    CAT4x4Matrix & operator  = (const CAT4x4Matrix & iMatrix);
    
    /**
     * Multiplication operator.
     * @param iMatrix
     *   The matrix to multiply with the current one
     * @return
     *   The matrix resulting from the multiplication
     */
    CAT4x4Matrix   operator  * (const CAT4x4Matrix & iMatrix) const;

    /**
     * Multiplies a matrix by a space point.
     * <br><b>Role:</b>
     * The 3x3 submatrix is multiplied by the point coordinate triplet
     * and the matrix translation vector is added to the multiplication result
     * @param iPoint
     *   The point whose coordinate triplet is to be multiplied by the matrix
     * @return
     *   The point resulting from the multiplication
     */
    CATMathPointf     operator * (const CATMathPointf & iPoint) const;

    /**
     * Multiplies a matrix by a space vector.
     * <br><b>Role:</b>
     * The 3x3 submatrix is multiplied by the vector component triplet
     * and the matrix translation vector is added to the multiplication result
     * @param iVector
     *   The vector whose component triplet is to be multiplied by the matrix
     * @return
     *   The vector resulting from the multiplication
     */
    CATMathVectorf    operator * (const CATMathVectorf & iVector) const;

    /**
     * Multiplies a matrix by a space direction.
     * <br><b>Role:</b>
     * The 3x3 submatrix is multiplied by the direction component triplet
     * and the matrix translation vector is added to the multiplication result
     * @param iDirection
     *   The direction whose component triplet is to be multiplied by the matrix
     * @return
     *   The direction resulting from the multiplication
     */
    CATMathDirectionf operator * (const CATMathDirectionf & iDirection) const;

    /** Sets the 3D matrix translation from a vector.
     * @param iTra
     * The translation vector.
     * @param w
     * Do not use this parameter.
     */
    void SetTranslation (const CATMathVectorf & iTra, const float w = 1.f);

    /** Gets the 3D matrix translation vector.
     * @param oTra
     * The returned translation vector.
     */
    void GetTranslation (CATMathVectorf & oTra) const;  
    
    /** Gets the 3D matrix components.
     * @param oU
     * The returned U rotation vector.
     * @param oV
     * The returned V rotation vector.
     * @param oW
     * The returned W rotation vector.
     * @param oTra
     * The returned translation point.
     */
    void GetComponents (CATMathVectorf &oU, CATMathVectorf &oV, CATMathVectorf &oW, CATMathPointf &oT) const;

    /** Gets the 3D matrix components.
     * @param oU
     * The returned U rotation direction.
     * @param oV
     * The returned V rotation direction.
     * @param oW
     * The returned W rotation direction.
     * @param oTra
     * The returned translation point.
     */
    void GetComponents (CATMathDirectionf &oU, CATMathDirectionf &oV, CATMathDirectionf &oW, CATMathPointf &oT) const;

    /** Sets the 3D matrix components.
     * @param iU
     * The U rotation vector.
     * @param iV
     * The V rotation vector.
     * @param iW
     * The W rotation vector.
     * @param iTra
     * The translation point.
     */
    void SetComponents (const CATMathVectorf &iU, const CATMathVectorf &iV, const CATMathVectorf &iW, const CATMathPointf &iT);

    /** Sets the 3D matrix components.
     * @param iU
     * The U rotation direction.
     * @param iV
     * The V rotation direction.
     * @param iW
     * The W rotation direction.
     * @param iTra
     * The translation point.
     */
    void SetComponents (const CATMathDirectionf &iU, const CATMathDirectionf &iV, const CATMathDirectionf &iW, const CATMathPointf &iT);

    /** Sets one element of the 3D matrix.
     * @param iRow
     * The row indice.
     * @param iCol
     * The column indice.
     * @param iValue.
     * The value of the rowth and columnth element to be set.
     */
    inline void SetElement( int iRow, int iCol, float iValue);
    
    /** Gets the inverted 3D matrix.
     * @param oMatrix
     * The returned inverted matrix.
     */
    void GetInvertedMatrix (CAT4x4Matrix & oMatrix) const;

    /** Gets the determinant of the 3D matrix.
     * @return
     * The value of the determinant.
     */
    inline float GetDeterminant (void) const;
    
    /** Gets the 3D matrix components.
     * @return
     * The float pointer of the 3D matrix components.
     */
    inline float * GetMatrix (void) const; 
    
    /** Gets the scaling factor of the 3D matrix.
     * @return
     * The value of the scaling factor of the 3D matrix.
     */
    inline float GetScaling (void) const;

    /** Indicates if the 3D matrix is an identity matrix.
     * @return
     * The status of the 3D matrix.
     */
    int IsIdentity (void) const;
    
    /** Multiplies the 3D matrix by a direction.
     * @param ioDirection
     * The direction multiply by the matrix and the returned direction.
     */
    inline void multiply (CATMathDirectionf & ioDirection) const;

    /** Multiplies the 3D matrix by a vector.
     * @param ioVector
     * The vector multiply by the matrix and the returned vector.
     */
    inline void multiply (CATMathVectorf & ioVector) const;

    /** Multiplies the 3D matrix by a point.
     * @param ioPoint
     * The point multiply by the matrix and the returned point.
     */
    inline void multiply (CATMathPointf & ioPoint) const;

    /** Multiplies a 3D matrix by another 3D matrix.
     * @param iMatrix1
     * The first 3D matrix. 
     * @param iMatrix2
     * The second 3D matrix. 
     */
    inline void multiply (const CAT4x4Matrix &iMatrix1, const CAT4x4Matrix &iMatrix2);

    /** Computes an Inversed, Transposed with the third column normalized 
     * 3D matrix.
     * @param oMatrix
     * The components of the resultant 3D matrix.
     */
    void ComputeInverseTransposeThirdColumnNormalized( float * oMatrix ) const;

//------------------------------------------------------------------------------
  private:

    /** @nodoc */
    void SetRotation (const CATMathDirectionf &, const CATMathPointf &, const float &);

    /** @nodoc */
    void ComputeScaling();

    /** @nodoc */
    void ComputeDeterminant();
  
    float matrix[4][4];
    float _determinant;
    float _scaling;
};

//******************************************************************************
//*** INLINED METHODS: *********************************************************
//******************************************************************************


inline void CAT4x4Matrix::multiply (CATMathDirectionf &direction) const
{
 float x = direction.x;
 float y = direction.y;
 float z = direction.z;
 
 direction.x = matrix[0][0] * x + matrix[1][0] * y + matrix[2][0] * z;
 direction.y = matrix[0][1] * x + matrix[1][1] * y + matrix[2][1] * z;
 direction.z = matrix[0][2] * x + matrix[1][2] * y + matrix[2][2] * z;

 if ( _scaling != 1.f ) 
 {
  direction.Normalize();
 }
}

inline void CAT4x4Matrix::multiply (CATMathPointf &point) const
{
 float x = point.x;
 float y = point.y;
 float z = point.z;
 
 point.x = matrix[0][0] * x + matrix[1][0] * y + matrix[2][0] * z + matrix[3][0];
 point.y = matrix[0][1] * x + matrix[1][1] * y + matrix[2][1] * z + matrix[3][1];
 point.z = matrix[0][2] * x + matrix[1][2] * y + matrix[2][2] * z + matrix[3][2];
}

inline void CAT4x4Matrix::multiply (CATMathVectorf &vector) const
{
 float x = vector.x;
 float y = vector.y;
 float z = vector.z;
 
 vector.x = matrix[0][0] * x + matrix[1][0] * y + matrix[2][0] * z;
 vector.y = matrix[0][1] * x + matrix[1][1] * y + matrix[2][1] * z;
 vector.z = matrix[0][2] * x + matrix[1][2] * y + matrix[2][2] * z;
}

inline float * CAT4x4Matrix::GetMatrix() const
{
 return (float *) &matrix[0][0];
}

inline float CAT4x4Matrix::GetDeterminant() const
{
 return (_determinant);
}

inline float CAT4x4Matrix::GetScaling() const
{
 return (_scaling);
}

inline void CAT4x4Matrix::SetElement( int column, int row, float value)
{
  if(column > 3 || row > 3) return;
  matrix[column][row] = value;
}

inline void CAT4x4Matrix::multiply (const CAT4x4Matrix &m1,  const CAT4x4Matrix &m2 ) 
{
 matrix[0][0] = m1.matrix[0][0]*m2.matrix[0][0] + m1.matrix[0][1]*m2.matrix[1][0] + m1.matrix[0][2]*m2.matrix[2][0] + m1.matrix[0][3]*m2.matrix[3][0];
 matrix[1][0] = m1.matrix[1][0]*m2.matrix[0][0] + m1.matrix[1][1]*m2.matrix[1][0] + m1.matrix[1][2]*m2.matrix[2][0] + m1.matrix[1][3]*m2.matrix[3][0];
 matrix[2][0] = m1.matrix[2][0]*m2.matrix[0][0] + m1.matrix[2][1]*m2.matrix[1][0] + m1.matrix[2][2]*m2.matrix[2][0] + m1.matrix[2][3]*m2.matrix[3][0];
 matrix[3][0] = m1.matrix[3][0]*m2.matrix[0][0] + m1.matrix[3][1]*m2.matrix[1][0] + m1.matrix[3][2]*m2.matrix[2][0] + m1.matrix[3][3]*m2.matrix[3][0];

 matrix[0][1] = m1.matrix[0][0]*m2.matrix[0][1] + m1.matrix[0][1]*m2.matrix[1][1] + m1.matrix[0][2]*m2.matrix[2][1] + m1.matrix[0][3]*m2.matrix[3][1];
 matrix[1][1] = m1.matrix[1][0]*m2.matrix[0][1] + m1.matrix[1][1]*m2.matrix[1][1] + m1.matrix[1][2]*m2.matrix[2][1] + m1.matrix[1][3]*m2.matrix[3][1];
 matrix[2][1] = m1.matrix[2][0]*m2.matrix[0][1] + m1.matrix[2][1]*m2.matrix[1][1] + m1.matrix[2][2]*m2.matrix[2][1] + m1.matrix[2][3]*m2.matrix[3][1];
 matrix[3][1] = m1.matrix[3][0]*m2.matrix[0][1] + m1.matrix[3][1]*m2.matrix[1][1] + m1.matrix[3][2]*m2.matrix[2][1] + m1.matrix[3][3]*m2.matrix[3][1];

 matrix[0][2] = m1.matrix[0][0]*m2.matrix[0][2] + m1.matrix[0][1]*m2.matrix[1][2] + m1.matrix[0][2]*m2.matrix[2][2] + m1.matrix[0][3]*m2.matrix[3][2];
 matrix[1][2] = m1.matrix[1][0]*m2.matrix[0][2] + m1.matrix[1][1]*m2.matrix[1][2] + m1.matrix[1][2]*m2.matrix[2][2] + m1.matrix[1][3]*m2.matrix[3][2];
 matrix[2][2] = m1.matrix[2][0]*m2.matrix[0][2] + m1.matrix[2][1]*m2.matrix[1][2] + m1.matrix[2][2]*m2.matrix[2][2] + m1.matrix[2][3]*m2.matrix[3][2];
 matrix[3][2] = m1.matrix[3][0]*m2.matrix[0][2] + m1.matrix[3][1]*m2.matrix[1][2] + m1.matrix[3][2]*m2.matrix[2][2] + m1.matrix[3][3]*m2.matrix[3][2];
 
 matrix[0][3] = m1.matrix[0][0]*m2.matrix[0][3] + m1.matrix[0][1]*m2.matrix[1][3] + m1.matrix[0][2]*m2.matrix[2][3] + m1.matrix[0][3]*m2.matrix[3][3];
 matrix[1][3] = m1.matrix[1][0]*m2.matrix[0][3] + m1.matrix[1][1]*m2.matrix[1][3] + m1.matrix[1][2]*m2.matrix[2][3] + m1.matrix[1][3]*m2.matrix[3][3];
 matrix[2][3] = m1.matrix[2][0]*m2.matrix[0][3] + m1.matrix[2][1]*m2.matrix[1][3] + m1.matrix[2][2]*m2.matrix[2][3] + m1.matrix[2][3]*m2.matrix[3][3];
 matrix[3][3] = m1.matrix[3][0]*m2.matrix[0][3] + m1.matrix[3][1]*m2.matrix[1][3] + m1.matrix[3][2]*m2.matrix[2][3] + m1.matrix[3][3]*m2.matrix[3][3];

 _determinant = m1._determinant * m2._determinant;
 _scaling     = m1._scaling * m2._scaling; 
}
#endif
