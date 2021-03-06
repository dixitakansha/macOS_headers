//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBrowserTableColumnViewController.h"

@class NSColor;

@interface TViewBasedBrowserTableColumnViewController : TBrowserTableColumnViewController
{
    double _textSize;
    _Bool _hasSpaceForBadgeImages;
}

@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)configureColumnRowView:(id)arg1 forRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
@property(readonly, retain, nonatomic) NSColor *groupNameTextColor; // @dynamic groupNameTextColor;
- (void)columnWasAdded;
- (void)aboutToTearDown;
- (id)nibBundle;
- (void)loadView;

@end

