//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CustomAlertController.h"

@class NSMatrix;

@interface RadioAlertController : CustomAlertController
{
    NSMatrix *mode;
}

- (void)deselectMode;
- (id)modeCellAtRow:(unsigned long long)arg1;
- (void)click_OK:(id)arg1;
- (void)awakeFromNib;
- (id)rowPrefKey;

@end

