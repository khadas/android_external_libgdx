/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Extras_WRAP_H_
#define SWIG_Extras_WRAP_H_

class SwigDirector_btBulletWorldImporter : public btBulletWorldImporter, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_btBulletWorldImporter(JNIEnv *jenv, btDynamicsWorld *world = 0);
    virtual ~SwigDirector_btBulletWorldImporter();
    virtual void deleteAllData();
    virtual void setDynamicsWorldInfo(btVector3 const &gravity, btContactSolverInfo const &solverInfo);
    virtual btRigidBody *createRigidBody(bool isDynamic, btScalar mass, btTransform const &startTransform, btCollisionShape *shape, char const *bodyName);
    virtual btCollisionObject *createCollisionObject(btTransform const &startTransform, btCollisionShape *shape, char const *bodyName);
    virtual btCollisionShape *createPlaneShape(btVector3 const &planeNormal, btScalar planeConstant);
    virtual btCollisionShape *createBoxShape(btVector3 const &halfExtents);
    virtual btCollisionShape *createSphereShape(btScalar radius);
    virtual btCollisionShape *createCapsuleShapeX(btScalar radius, btScalar height);
    virtual btCollisionShape *createCapsuleShapeY(btScalar radius, btScalar height);
    virtual btCollisionShape *createCapsuleShapeZ(btScalar radius, btScalar height);
    virtual btCollisionShape *createCylinderShapeX(btScalar radius, btScalar height);
    virtual btCollisionShape *createCylinderShapeY(btScalar radius, btScalar height);
    virtual btCollisionShape *createCylinderShapeZ(btScalar radius, btScalar height);
    virtual btCollisionShape *createConeShapeX(btScalar radius, btScalar height);
    virtual btCollisionShape *createConeShapeY(btScalar radius, btScalar height);
    virtual btCollisionShape *createConeShapeZ(btScalar radius, btScalar height);
    virtual btTriangleIndexVertexArray *createTriangleMeshContainer();
    virtual btBvhTriangleMeshShape *createBvhTriangleMeshShape(btStridingMeshInterface *trimesh, btOptimizedBvh *bvh);
    virtual btCollisionShape *createConvexTriangleMeshShape(btStridingMeshInterface *trimesh);
    virtual btGImpactMeshShape *createGimpactShape(btStridingMeshInterface *trimesh);
    virtual btStridingMeshInterfaceData *createStridingMeshInterfaceData(btStridingMeshInterfaceData *interfaceData);
    virtual btConvexHullShape *createConvexHullShape();
    virtual btCompoundShape *createCompoundShape();
    virtual btScaledBvhTriangleMeshShape *createScaledTrangleMeshShape(btBvhTriangleMeshShape *meshShape, btVector3 const &localScalingbtBvhTriangleMeshShape);
    virtual btTriangleIndexVertexArray *createMeshInterface(btStridingMeshInterfaceData &meshData);
    virtual btOptimizedBvh *createOptimizedBvh();
    virtual btTriangleInfoMap *createTriangleInfoMap();
    virtual btPoint2PointConstraint *createPoint2PointConstraint(btRigidBody &rbA, btRigidBody &rbB, btVector3 const &pivotInA, btVector3 const &pivotInB);
    virtual btPoint2PointConstraint *createPoint2PointConstraint(btRigidBody &rbA, btVector3 const &pivotInA);
    virtual btHingeConstraint *createHingeConstraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &rbAFrame, btTransform const &rbBFrame, bool useReferenceFrameA = false);
    virtual btHingeConstraint *createHingeConstraint(btRigidBody &rbA, btTransform const &rbAFrame, bool useReferenceFrameA = false);
    virtual btConeTwistConstraint *createConeTwistConstraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &rbAFrame, btTransform const &rbBFrame);
    virtual btConeTwistConstraint *createConeTwistConstraint(btRigidBody &rbA, btTransform const &rbAFrame);
    virtual btGeneric6DofConstraint *createGeneric6DofConstraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &frameInA, btTransform const &frameInB, bool useLinearReferenceFrameA);
    virtual btGeneric6DofConstraint *createGeneric6DofConstraint(btRigidBody &rbB, btTransform const &frameInB, bool useLinearReferenceFrameB);
    virtual btGeneric6DofSpringConstraint *createGeneric6DofSpringConstraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &frameInA, btTransform const &frameInB, bool useLinearReferenceFrameA);
    virtual btGeneric6DofSpring2Constraint *createGeneric6DofSpring2Constraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &frameInA, btTransform const &frameInB, int rotateOrder);
    virtual btSliderConstraint *createSliderConstraint(btRigidBody &rbA, btRigidBody &rbB, btTransform const &frameInA, btTransform const &frameInB, bool useLinearReferenceFrameA);
    virtual btSliderConstraint *createSliderConstraint(btRigidBody &rbB, btTransform const &frameInB, bool useLinearReferenceFrameA);
    virtual btGearConstraint *createGearConstraint(btRigidBody &rbA, btRigidBody &rbB, btVector3 const &axisInA, btVector3 const &axisInB, btScalar ratio);
    virtual bool convertAllObjects(bParse::btBulletFile *file);
public:
    bool swig_overrides(int n) {
      return (n < 43 ? swig_override[n] : false);
    }
protected:
    Swig::BoolArray<43> swig_override;
};


#endif