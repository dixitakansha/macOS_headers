//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseSidebarConversationCellView.h"

@class NSTextField;

@interface SidebarConversationCellView : BaseSidebarConversationCellView
{
    BOOL _observingCellView;
    NSTextField *_unreadCountBadge;
    unsigned long long _unreadMessageCount;
    id _emoticonsObserver;
}

+ (id)keyPathsForValuesAffectingSubtitleHidden;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingBoldFont;
+ (id)keyPathsForValuesAffectingNarrowModeUnreadCount;
+ (id)keyPathsForValuesAffectingHasUnreadMessages;
+ (id)keyPathsForValuesAffectingAvatarImage;
+ (id)keyPathsForValuesAffectingPresenceImage;
@property(getter=isObservingCellView) BOOL observingCellView; // @synthesize observingCellView=_observingCellView;
@property(retain) id emoticonsObserver; // @synthesize emoticonsObserver=_emoticonsObserver;
@property unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property NSTextField *unreadCountBadge; // @synthesize unreadCountBadge=_unreadCountBadge;
- (void).cxx_destruct;
- (void)updateSubtitleAccessibilityValueDescription;
- (void)updateBadgeAccessibilityValueDescription;
- (void)handleViewLayoutModeChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingCellView;
- (void)startObservingCellView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)subtitleHidden;
- (id)subtitle;
- (id)subtitleAttributes;
- (BOOL)boldFont;
- (unsigned long long)narrowModeUnreadCount;
- (BOOL)hasUnreadMessages;
- (id)avatarImage;
- (id)presenceImage;
- (void)setObjectValue:(id)arg1;
- (id)makeConstraints;
- (void)dealloc;
- (void)awakeFromNib;

@end

