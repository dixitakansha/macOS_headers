//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSDictionary, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask
{
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    NSDictionary *_urlsToResults;
}

@property(readonly, retain, nonatomic) NSDictionary *urlsToResults; // @synthesize urlsToResults=_urlsToResults;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)dealloc;
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;

@end

