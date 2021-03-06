//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBaseGameCell.h>

@class NSImageView, NSTextField;

@interface GKTurnGameCell : GKBaseGameCell
{
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    NSTextField *_activeMatchesLabel;
    NSTextField *_localPlayerTurnsLabel;
    NSImageView *_statusImageView;
    struct NSEdgeInsets _insets;
}

+ (void)registerCellClassesForCollectionView:(id)arg1;
+ (id)itemHeightList;
+ (double)defaultRowHeight;
@property NSImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property NSTextField *localPlayerTurnsLabel; // @synthesize localPlayerTurnsLabel=_localPlayerTurnsLabel;
@property NSTextField *activeMatchesLabel; // @synthesize activeMatchesLabel=_activeMatchesLabel;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) unsigned long long numberOfLocalPlayerTurns; // @synthesize numberOfLocalPlayerTurns=_numberOfLocalPlayerTurns;
@property(nonatomic) unsigned long long numberOfActiveMatches; // @synthesize numberOfActiveMatches=_numberOfActiveMatches;
- (void)setSelected:(BOOL)arg1;
- (void)didUpdateModel;

@end

