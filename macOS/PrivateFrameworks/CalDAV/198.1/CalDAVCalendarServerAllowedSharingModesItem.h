//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_canBePublished;
    CoreDAVItemWithNoChildren *_canBeShared;
    CoreDAVItemWithNoChildren *_isMarkedUndeletable;
    CoreDAVItemWithNoChildren *_isMarkedImmutableSharees;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared; // @synthesize canBeShared=_canBeShared;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished; // @synthesize canBePublished=_canBePublished;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

