//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTaskErrorViewController.h"

@interface TTaskErrorOrConflictViewController : TTaskErrorViewController
{
    unsigned int _leftResolution;
    unsigned int _middleResolution;
    unsigned int _rightResolution;
    _Bool _isShowingConflict;
}

@property(nonatomic) _Bool isShowingConflict; // @synthesize isShowingConflict=_isShowingConflict;
- (void)buttonHit:(unsigned int)arg1;
- (void)rightButtonPressed:(id)arg1;
- (void)middleButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)setResolutionsForKind:(int)arg1;
- (void)setLeftResolution:(unsigned int)arg1;
- (void)initCommon;
- (id)initWithViewKind:(int)arg1;

@end

