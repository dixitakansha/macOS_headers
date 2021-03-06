//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@interface BadgeCell : NSTextFieldCell
{
    unsigned long long _cornerRadius;
}

@property(nonatomic) unsigned long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)backgroundPathForCellFrame:(struct CGRect)arg1;
- (struct CGRect)badgeBackgroundRectForBounds:(struct CGRect)arg1;
- (id)initTextCell:(id)arg1;

@end

