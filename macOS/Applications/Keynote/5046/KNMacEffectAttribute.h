//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSArrayController;

@interface KNMacEffectAttribute : TMAInspectorPaneController
{
    BOOL mHasGroupedPanesBelow;
    NSArrayController *mSelectedModelObjectsController;
}

@property(nonatomic) BOOL hasGroupedPanesBelow; // @synthesize hasGroupedPanesBelow=mHasGroupedPanesBelow;
@property(readonly, nonatomic) NSArrayController *selectedModelObjectsController; // @synthesize selectedModelObjectsController=mSelectedModelObjectsController;
- (void)discardEditing;
- (BOOL)commitEditing;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)initWithSelectedModelObjectsController:(id)arg1;
- (void)dealloc;

@end

