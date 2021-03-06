//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CorePDF/CPTextObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable>
{
    CPCharSequence *charSequence;
    CDStruct_2e2afed4 *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer *inlineList;
    int lineNumber;
    int columnNumber;
    double baseline;
    BOOL baseLineIsNull;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    BOOL irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    BOOL isListItem;
    unsigned int listSpacerIndex;
    BOOL lineBreakAfter;
    struct CPPDFStyle *uniformStyle;
    unsigned short uniformStyleFlags;
    double monospaceWidth;
    unsigned int *spacesBefore;
    BOOL disposed;
}

@property(nonatomic) BOOL lineBreakAfter; // @synthesize lineBreakAfter;
@property(nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property(nonatomic) BOOL isListItem; // @synthesize isListItem;
@property(nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;
@property(nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
- (double)medianFontSize;
- (BOOL)hasDropCap;
- (long long)topIsAbove:(id)arg1;
- (id)attributes;
- (void)setIrregular:(BOOL)arg1;
- (BOOL)irregular;
- (void)setMaximumWordGap:(float)arg1;
- (float)maximumWordGap;
- (void)setMaximumLetterGap:(float)arg1;
- (float)maximumLetterGap;
- (void)recomputeLevels;
- (void)setLevels:(int)arg1;
- (int)levels;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (double)monospaceWidth;
- (BOOL)isMonospaced;
- (BOOL)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;
- (void)recomputeBaseline;
- (void)translateObjectYBy:(double)arg1;
- (BOOL)isIndivisible;
- (void)setBaselineToNull;
- (void)setBaseline:(double)arg1;
- (double)baseline;
- (BOOL)hyphenated;
- (struct CGPoint)anchor;
- (BOOL)overlapsHorizontally:(struct CGRect)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (long long)baseLineAscending:(id)arg1;
- (struct CGRect)bounds;
- (void)fitBoundsToChildren;
- (int)tabsBefore;
- (void)setTabsBefore:(int)arg1;
- (BOOL)hasTabs;
- (void)setHasTabs:(BOOL)arg1;
- (void)accept:(id)arg1;
- (void)setColumnBreaks:(id)arg1;
- (id)columnBreaks;
- (BOOL)hasBeenProcessed;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (BOOL)hasBeenSplit;
- (void)setHasBeenSplit:(BOOL)arg1;
- (id)properties;
- (BOOL)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (BOOL)changesFontAt:(id)arg1;
- (BOOL)hasJustifiedAlignment;
- (int)align;
- (long long)zOrder;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (struct CPInlineContainer *)inlineList;
- (unsigned int)inlineCount;
- (CDStruct_2e2afed4 *)lastWord;
- (CDStruct_2e2afed4 *)firstWord;
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;
- (unsigned int)wordCount;
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;
- (CDStruct_2e2afed4 *)wordArray;
- (id)charSequence;
- (void)setCharSequence:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;

@end

