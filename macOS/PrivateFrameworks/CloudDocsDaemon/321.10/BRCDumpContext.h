//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCTermDumper, NSString, PQLConnection;

__attribute__((visibility("hidden")))
@interface BRCDumpContext : NSObject
{
    long long _indentation;
    BRCTermDumper *_termDumper;
    BOOL _liveDaemon;
    struct __sFILE *_fp;
    PQLConnection *_db;
    NSString *_indentationBaseString;
}

+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromBackoff:(double)arg1 context:(id)arg2;
+ (id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 context:(id)arg3 allowsPast:(BOOL)arg4;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;
@property(nonatomic) BOOL liveDaemon; // @synthesize liveDaemon=_liveDaemon;
@property(retain, nonatomic) NSString *indentationBaseString; // @synthesize indentationBaseString=_indentationBaseString;
@property(readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property(readonly, nonatomic) struct __sFILE *fp; // @synthesize fp=_fp;
- (void).cxx_destruct;
- (void)popIndentation;
- (void)pushIndentation;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (void)writeLineWithFormat:(id)arg1;
- (id)initWithFile:(struct __sFILE *)arg1 db:(id)arg2;

@end

