//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMouseEventHandler-Protocol.h"

@class NSString, TSDAlignmentGuide, TSDInteractiveCanvasController, TSDUserDefinedGuideController;

@interface TSDMacGuideDragEventHandler : NSObject <TSDMouseEventHandler>
{
    TSDInteractiveCanvasController *mICC;
    TSDAlignmentGuide *mGuideToEdit;
    struct CGPoint mInitialMouseDownPoint;
    BOOL mDidDrag;
}

@property(nonatomic) BOOL didDrag; // @synthesize didDrag=mDidDrag;
@property(retain, nonatomic) TSDAlignmentGuide *guideToEdit; // @synthesize guideToEdit=mGuideToEdit;
- (void).cxx_destruct;
- (void)mouseUpAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)handleDoubleClickAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseScrolledAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)p_moveToPoint:(struct CGPoint)arg1;
- (BOOL)p_shouldEditGuideAtPoint:(struct CGPoint)arg1;
- (void)p_beginDragging:(struct CGPoint)arg1;
- (void)mouseDownAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)endEditingGuides;
- (void)beginEditingGuides;
- (void)findGuideToEdit:(struct CGPoint)arg1;
- (void)p_hideHUD;
- (void)p_updateHUDAtPoint:(struct CGPoint)arg1;
- (id)p_unitStringForGuideAtUnscaledPoint:(struct CGPoint)arg1;
- (double)p_userFacingOffsetValueForGuideAtUnscaledPoint:(struct CGPoint)arg1 withCenterRulerOrigin:(BOOL)arg2;
- (id)initWithInteractiveCanvasController:(id)arg1 guide:(id)arg2;
@property(readonly, nonatomic) TSDUserDefinedGuideController *guideController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

