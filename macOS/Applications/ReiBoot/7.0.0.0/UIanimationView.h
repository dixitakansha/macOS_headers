//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSView.h"

@class CAShapeLayer;

@interface UIanimationView : NSView
{
    CAShapeLayer *_dashRectLayer;
    CAShapeLayer *_dashLineTopLayer;
    CAShapeLayer *_dashLineRightLayer;
    CAShapeLayer *_dashLineBottomLayer;
    CAShapeLayer *_dashLineLeftLayer;
    id _actionOwner;
    SEL _onClickEvent;
}

- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setActionEvent:(id)arg1 selector:(SEL)arg2;
- (void)drawDashRectLayer;
- (id)builDashLineLayer:(int)arg1;
- (id)addAnimationForLayer:(int)arg1;
- (void)stopDashRectAnimation;
- (void)startDashRectAanimation;
- (void)drawRect:(struct _NSRect)arg1;
- (void)onNotifyThemeChange:(id)arg1;
- (void)awakeFromNib;

@end

