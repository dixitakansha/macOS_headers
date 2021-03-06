//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PRSDecoder;
@protocol PRSSimpleResult;

@interface PRSSearchCompletionResultSet : NSObject
{
    PRSDecoder *_decoder;
    id <PRSSimpleResult> _fakeMapsMoreResult;
    NSMutableDictionary *_patternStringsToPatterns;
    BOOL _cacheable;
    float _completionScore;
    NSString *_prefix;
    NSString *_completionString;
    NSString *_feedbackQueryIdentifier;
    NSString *_resultStatusString;
    double _maxAge;
    NSArray *_results;
    NSArray *_patternStrings;
}

@property(readonly, nonatomic) NSArray *patternStrings; // @synthesize patternStrings=_patternStrings;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(readonly, nonatomic) NSString *resultStatusString; // @synthesize resultStatusString=_resultStatusString;
@property(readonly, nonatomic, getter=isCacheable) BOOL cacheable; // @synthesize cacheable=_cacheable;
@property(readonly, nonatomic) NSString *feedbackQueryIdentifier; // @synthesize feedbackQueryIdentifier=_feedbackQueryIdentifier;
@property(readonly, nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property(readonly, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(readonly, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)description;
- (void)enumeratePatternsUsingBlock:(CDUnknownBlockType)arg1;
- (id)resultForFactory:(id)arg1 session:(id)arg2 resourceProvider:(id)arg3 dictionary:(id)arg4 error:(id *)arg5;
- (id)parseMapsTemplate:(id)arg1 withFactory:(id)arg2;
- (id)parseSimpleTemplate:(id)arg1 withFactory:(id)arg2;
- (id)decodeImageArray:(id)arg1;
- (id)decodeImage:(id)arg1;
- (id)initWithResultSet:(id)arg1 prefix:(id)arg2 completionString:(id)arg3 score:(float)arg4;
- (id)initWithFactory:(id)arg1 session:(id)arg2 resourceProvider:(id)arg3 prefix:(id)arg4 completionString:(id)arg5 score:(float)arg6 resultStatusString:(id)arg7 feedbackQueryIdentifier:(id)arg8 resultDictionaries:(id)arg9 matchesArray:(id)arg10 error:(id *)arg11;

@end

