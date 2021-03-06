//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPlugin-Protocol.h"
#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNTransitionMetalAnimator-Protocol.h"
#import "KNTransitionOpenGLAnimator-Protocol.h"

@class NSString, TSDGLShader, TSDMetalMotionBlurEffect, TSDMetalShader;
@protocol TSDGLDataBuffer, TSDMTLDataBuffer;

@interface KNTransitionColorPlanes : KNAnimationEffect <KNAnimationPlugin, KNAnimationPluginArchiving, KNTransitionOpenGLAnimator, KNTransitionMetalAnimator>
{
    TSDGLShader *_colorShader;
    id <TSDGLDataBuffer> _colorDataBuffer;
    double _colorCount;
    TSDMetalMotionBlurEffect *_motionBlurMetalEffect;
    TSDMetalShader *_metalShader;
    unsigned long long _numVertices;
    id <TSDMTLDataBuffer> _metalColorDataBuffer;
    // Error parsing type: [3{?="MVPMatrix"{?="columns"[4]}"previousMVPMatrix"{?="columns"[4]}"velocityScale""flipTexCoords""colorMask"}], name: _vertexInput
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void).cxx_destruct;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_drawWithMetalContext:(id)arg1 renderEncoder:(id)arg2;
- (void)p_drawWithOpenGLContext:(id)arg1;
- (struct CATransform3D)p_mvpMatrixWithTexture:(id)arg1 direction:(unsigned long long)arg2 percent:(double)arg3 colorIndex:(unsigned long long)arg4;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

