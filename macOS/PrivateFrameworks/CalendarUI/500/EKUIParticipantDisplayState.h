//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKUIParticipantDisplayState : NSObject
{
}

+ (id)malformedStatusSelectedIcon;
+ (id)malformedStatusIcon;
+ (id)unknownStatusSelectedIcon;
+ (id)unknownStatusIcon;
+ (id)busyStatusSelectedIcon;
+ (id)busyStatusIcon;
+ (id)freeStatusSelectedIcon;
+ (id)freeStatusIcon;
+ (id)tentativeParticipationIcon;
+ (id)declinedParticipationIcon;
+ (id)acceptedParticipationIcon;
+ (id)templateStatusImageForName:(id)arg1;
+ (id)statusImageForName:(id)arg1 color:(id)arg2;
+ (id)displayImageForFreeBusyType:(int)arg1 selected:(BOOL)arg2;
+ (int)displayImageStateForParticipant:(id)arg1 event:(id)arg2 freeBusyType:(int)arg3;
+ (id)displayImageForParticipant:(id)arg1 event:(id)arg2 freeBusyType:(int)arg3 selected:(BOOL)arg4;
+ (id)displayImageForSharee:(id)arg1 selected:(BOOL)arg2;
+ (void)setImageIconForType:(unsigned long long)arg1 selected:(BOOL)arg2;
+ (id)imageForIconType:(unsigned long long)arg1 selected:(BOOL)arg2;
+ (void)initializeCache;
+ (void)initialize;

@end

