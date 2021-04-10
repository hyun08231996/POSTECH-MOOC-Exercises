#import the libraries
import math
import pandas_datareader as web
import pandas as pd
import numpy as np
from sklearn.preprocessing import MinMaxScaler
from keras.models import Sequential
from keras.layers import LSTM, Dense
import matplotlib.pyplot as plt
plt.style.use('fivethrityeight')

#Get the stock quote
df = pd.read_csv('dataset/icon.xlsx')


