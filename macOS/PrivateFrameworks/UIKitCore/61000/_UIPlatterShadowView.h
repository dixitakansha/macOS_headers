//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIPlatterShadowView : UIView
{
    BOOL _punchOut;
    _UIShapeView *_shadowMaskView;
}

@property(readonly, nonatomic) _UIShapeView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
@property(nonatomic) BOOL punchOut; // @synthesize punchOut=_punchOut;
- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *shadowPath;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) UIColor *shadowColor;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithShadowPath:(id)arg1;

@end

